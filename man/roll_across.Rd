% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/roll_across.R
\name{roll_across}
\alias{roll_across}
\title{Apply special grouped rolling functions to multiple columns - \bold{EXPERIMENTAL}}
\usage{
roll_across(.data, .cols, fun, ..., .names = "{.col}", .by = NULL)
}
\arguments{
\item{.data}{A data frame.}

\item{.cols}{Variables to apply the function to, specified with \code{tidy-select}.}

\item{fun}{A function. Currently, the list of optimised rolling functions
include: \cr
"time_elapsed", "time_roll_mean", "time_id",
"time_roll_apply", "time_roll_growth_rate",
"roll_mean", "roll_sum", "roll_apply",
"roll_na_fill",
"roll_geometric_mean", "roll_harmonic_mean",
"roll_growth_rate", "flag2", "fdiff2"

Any other function supplied is "rollified" by being passed to
\code{roll_apply()}.}

\item{...}{Additional arguments to pass to the function.}

\item{.names}{Column name specification. See \code{?dplyr::across} for more info.}

\item{.by}{Alternative way of specifying groups using \code{tidy-select}.}
}
\description{
Some rolling functions in this package require data
to be sorted in a specific way prior to grouped calculations.
This can offer tremendous speed and efficiency, but due to the fact the data
is reordered after the calculation, this method makes less sense when
applied to many unsorted variables.
\code{roll_across} attempts to solve this bottleneck by sorting all the data
based on the supplied groups, apply the rolling functions, then reorder the
data back in the original order.
}
