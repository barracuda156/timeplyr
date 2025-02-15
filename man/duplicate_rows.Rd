% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/duplicate_rows.R
\name{duplicate_rows}
\alias{duplicate_rows}
\alias{fduplicates}
\alias{fduplicates2}
\title{Find duplicate rows}
\usage{
duplicate_rows(
  data,
  ...,
  .keep_all = FALSE,
  .both_ways = FALSE,
  .add_count = FALSE,
  .drop_empty = FALSE,
  sort = FALSE,
  .by = NULL,
  .cols = NULL
)

fduplicates(
  data,
  ...,
  .keep_all = FALSE,
  .both_ways = FALSE,
  .add_count = FALSE,
  .drop_empty = FALSE,
  sort = FALSE,
  .by = NULL,
  .cols = NULL
)

fduplicates2(
  data,
  ...,
  .keep_all = FALSE,
  .both_ways = FALSE,
  .add_count = FALSE,
  .drop_empty = FALSE,
  .by = NULL
)
}
\arguments{
\item{data}{A data frame.}

\item{...}{Variables used to find duplicate rows.}

\item{.keep_all}{If \code{TRUE} then all columns of data frame are kept,
default is \code{FALSE}.}

\item{.both_ways}{If \code{TRUE} then duplicates and non-duplicate first instances
are retained. The default is \code{FALSE} which returns only duplicate rows. \cr
Setting this to \code{TRUE} can be particularly useful when examining
the differences between duplicate rows.}

\item{.add_count}{If \code{TRUE} then a count column is added to denote the
number of duplicates (including first non-duplicate instance).
The naming convention of this column follows \code{dplyr::add_count()}.}

\item{.drop_empty}{If \code{TRUE} then empty rows with all \code{NA} values are removed.
The default is \code{FALSE}.}

\item{sort}{Should result be sorted?
If \code{FALSE} (the default), then rows are returned in the exact same order as
they appear in the data.
If \code{TRUE} then the duplicate rows are sorted.}

\item{.by}{(Optional). A selection of columns to group by for this operation.
Columns are specified using tidy-select.}

\item{.cols}{(Optional) alternative to \code{...} that accepts
a named character vector or numeric vector.
If speed is an expensive resource, it is recommended to use this.}
}
\value{
A \code{data.frame} of duplicate rows.
}
\description{
Find duplicate rows
}
\details{
This function works like \code{dplyr::distinct()} in its handling of
arguments and data-masking but returns duplicate rows.
In certain situations in can be much faster than \code{data \%>\% group_by() \%>\% filter(n() > 1)}
when there are many groups.
\code{fduplicates2()} returns the same output but uses a different
method which utilises joins and is written almost entirely using dplyr.
}
\examples{
library(dplyr)
library(timeplyr)
library(nycflights13)
\dontshow{
.n_dt_threads <- data.table::getDTthreads()
.n_collapse_threads <- collapse::get_collapse()$nthreads
data.table::setDTthreads(threads = 2L)
collapse::set_collapse(nthreads = 1L)
}
# Duplicates across all columns
flights \%>\%
  duplicate_rows()
# Duplicate flights with the same tail number and departure time
flights \%>\%
  duplicate_rows(tailnum, dep_time)
# Can use tidyverse select notation
flights \%>\%
  duplicate_rows(across(contains("dep_time")), .keep_all = FALSE)
# Similar to janitor::get_dupes()
flights \%>\%
  duplicate_rows(tailnum, dep_time, .keep_all = FALSE, .add_count = TRUE)
# For every day were there multiple flights that departed at the same time?
flights \%>\%
  group_by(year, month, day) \%>\%
  duplicate_rows(dep_time, arr_time, .both_ways = TRUE)
\dontshow{
data.table::setDTthreads(threads = .n_dt_threads)
collapse::set_collapse(nthreads = .n_collapse_threads)
}
}
\seealso{
\link{fcount} \link{group_collapse} \link{fdistinct}
}
