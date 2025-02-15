% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/time_cut.R
\name{time_cut}
\alias{time_cut}
\alias{time_breaks}
\title{Cut dates and datetimes into regularly spaced date or datetime intervals}
\usage{
time_cut(
  x,
  n = 5,
  time_by = NULL,
  from = NULL,
  to = NULL,
  fmt = NULL,
  time_floor = FALSE,
  week_start = getOption("lubridate.week.start", 1),
  n_at_most = TRUE,
  as_factor = TRUE,
  time_type = getOption("timeplyr.time_type", "auto"),
  roll_month = getOption("timeplyr.roll_month", "preday"),
  roll_dst = getOption("timeplyr.roll_dst", "boundary")
)

time_breaks(
  x,
  n = 5,
  time_by = NULL,
  from = NULL,
  to = NULL,
  time_floor = FALSE,
  week_start = getOption("lubridate.week.start", 1),
  n_at_most = TRUE,
  time_type = getOption("timeplyr.time_type", "auto"),
  roll_month = getOption("timeplyr.roll_month", "preday"),
  roll_dst = getOption("timeplyr.roll_dst", "boundary")
)
}
\arguments{
\item{x}{Time variable. \cr
Can be a \code{Date}, \code{POSIXt}, \code{numeric}, \code{integer}, \code{yearmon}, or \code{yearqtr}.}

\item{n}{Number of breaks.}

\item{time_by}{Time unit. \cr
Must be one of the three:
\itemize{
\item string, specifying either the unit or the number and unit, e.g
\code{time_by = "days"} or \code{time_by = "2 weeks"}
\item named list of length one, the unit being the name, and
the number the value of the list, e.g. \code{list("days" = 7)}.
For the vectorized time functions, you can supply multiple values,
e.g. \code{list("days" = 1:10)}.
\item Numeric vector. If time_by is a numeric vector and x is not a date/datetime,
then arithmetic is used, e.g \code{time_by = 1}.
}}

\item{from}{Time series start date.}

\item{to}{Time series end date.}

\item{fmt}{(Optional) Date/datetime format for the factor labels.
If supplied, this is passed to \code{format()}.}

\item{time_floor}{Logical. Should the initial date/datetime be
floored before building the sequence?}

\item{week_start}{day on which week starts following ISO conventions - 1
means Monday (default), 7 means Sunday.
This is only used when \code{time_floor = TRUE}.}

\item{n_at_most}{Logical. If \code{TRUE} then n breaks at most are returned,
otherwise at least n breaks are returned.}

\item{as_factor}{Logical. If \code{TRUE} the output is an ordered factor.
Setting this to \code{FALSE} is sometimes much faster.}

\item{time_type}{If "auto", \code{periods} are used for
the time expansion when days, weeks, months or years are specified,
and \code{durations} are used otherwise.}

\item{roll_month}{Control how impossible dates are handled when
month or year arithmetic is involved.
Options are "preday", "boundary", "postday", "full" and "NA".
See \code{?timechange::time_add} for more details.}

\item{roll_dst}{See \code{?timechange::time_add} for the full list of details.}
}
\value{
\code{time_breaks} returns a vector of breaks. \cr
\code{time_cut} returns either a \code{factor} or a vector the same class as \code{x}.
In both cases it is the same length as \code{x}.
}
\description{
\code{time_cut()} is very useful for plotting with dates and datetimes
and always returns breaks of regular width. \cr
To specify exact widths, similar to \code{ggplot2::cut_width()},
supply \code{time_by} and \code{n = Inf}. \cr
\code{time_breaks()} is a helper that
returns only the time breaks.

By default \code{time_cut()} will try to find
the prettiest way of cutting the interval by
trying to cut the date/datetimes into
groups of the highest possible time units,
starting at years and ending at milliseconds.
If \code{n_at_most = TRUE} then \verb{<= n} groups are calculated,
otherwise \verb{>= n} groups
are calculated.
}
\examples{
library(timeplyr)
library(lubridate)
library(ggplot2)
library(dplyr)
\dontshow{
.n_dt_threads <- data.table::getDTthreads()
.n_collapse_threads <- collapse::get_collapse()$nthreads
data.table::setDTthreads(threads = 2L)
collapse::set_collapse(nthreads = 1L)
}
# Easily create custom time breaks
df <- nycflights13::flights \%>\%
  fslice_sample(n = 10^3, seed = 8192821) \%>\%
  select(time_hour) \%>\%
  mutate(date = as_date(time_hour))

# time_cut() and time_breaks() automatically find a
# suitable way to cut the data
time_cut(df$date)
# Works with datetimes as well
time_cut(df$time_hour, n = 5) # <= 5 breaks
# Custom formatting
time_cut(df$date, fmt = "\%Y \%b", time_by = "month")
time_cut(df$time_hour, fmt = "\%Y \%b", time_by = "month")
# Just the breaks
time_breaks(df$date, n = 5, time_by = "month")
time_breaks(df$time_hour, n = 5, time_by = "month")

# To get exact breaks at regular intervals, use time_expandv
weekly_breaks <- time_expandv(df$date,
                              time_by = "5 weeks",
                              week_start = 1, # Monday
                              time_floor = TRUE)
weekly_labels <- format(weekly_breaks, "\%b-\%d")
df \%>\%
  time_count(time = date, time_by = "week") \%>\%
  ggplot(aes(x = date, y = n)) +
  geom_bar(stat = "identity") +
  scale_x_date(breaks = weekly_breaks,
               labels = weekly_labels)
\dontshow{
data.table::setDTthreads(threads = .n_dt_threads)
collapse::set_collapse(nthreads = .n_collapse_threads)
}
}
