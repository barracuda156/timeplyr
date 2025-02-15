# timeplyr 0.3.0

* This version brings major performance improvements, including
new algorithms for subsetting and rolling calculations.

* The `roll_na_fill` algorithm has been improved significantly.

* Calculation of row numbers are faster and more efficient.

* All 'C++' functions are now registered using the cpp11 package.

* `cpp_which` is now available as a more efficient and sometimes faster alternative
to `which`.

* The double comparison functions have been migrated to the package 'cppdoubles'.

* `roll_na_fill` has been mostly rewritten in C++ for speed and efficiency.

* `roll_growth_rate` now accepts groups through the `g` argument.

* New function `roll_across` for grouped rolling calculations.

# timeplyr 0.2.1 (31-Oct-2023)

* Fixed a bug where `sequence2` would error when `nvec` was a zero-length vector.

* Fixed a bug where `time_granularity` would error with zero-length vectors.

* `is_whole_number` is now faster and the underlying C++ function is safer.

* Period calculations are now faster and more memory efficient and thus all the 
time functions are also faster.

* The `.keep_na` argument of `duplicate_rows` is now deprecated and replaced with
`drop_empty`.

* Most Rcpp functions are now more memory efficient due to disabling the RNGscope
where possible.

* Fixed an integer overflow bug in `sequence2`.

* The `as_period` argument in `time_diff` has been deprecated and removed.

* `time_num_gaps` and `time_has_gaps` now handle `NA` values more appropriately.

* 'collapse' `pivot` is now used for quantile summaries in `q_summarise`.

* timeplyr now utilises relative differences for all double comparisons using 
Rcpp

* All double comparisons are now fully vectorised and recycling occurs without 
additional memory allocation.

* New function `num_na` to efficiently calculate number of missing values.

* timeplyr 0.2.1 published to CRAN

# timeplyr 0.2.0 (15-Oct-2023)

* CRAN submission accepted.
