// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// any_int_lt
bool any_int_lt(IntegerVector x, int value);
RcppExport SEXP _timeplyr_any_int_lt(SEXP xSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(any_int_lt(x, value));
    return rcpp_result_gen;
END_RCPP
}
// any_num_lt
bool any_num_lt(NumericVector x, double value, Nullable<NumericVector> tol);
RcppExport SEXP _timeplyr_any_num_lt(SEXP xSEXP, SEXP valueSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(any_num_lt(x, value, tol));
    return rcpp_result_gen;
END_RCPP
}
// any_int_lte
bool any_int_lte(IntegerVector x, int value);
RcppExport SEXP _timeplyr_any_int_lte(SEXP xSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(any_int_lte(x, value));
    return rcpp_result_gen;
END_RCPP
}
// any_num_lte
bool any_num_lte(NumericVector x, double value, Nullable<NumericVector> tol);
RcppExport SEXP _timeplyr_any_num_lte(SEXP xSEXP, SEXP valueSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(any_num_lte(x, value, tol));
    return rcpp_result_gen;
END_RCPP
}
// any_int_gt
bool any_int_gt(IntegerVector x, int value);
RcppExport SEXP _timeplyr_any_int_gt(SEXP xSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(any_int_gt(x, value));
    return rcpp_result_gen;
END_RCPP
}
// any_num_gt
bool any_num_gt(NumericVector x, double value, Nullable<NumericVector> tol);
RcppExport SEXP _timeplyr_any_num_gt(SEXP xSEXP, SEXP valueSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(any_num_gt(x, value, tol));
    return rcpp_result_gen;
END_RCPP
}
// any_int_gte
bool any_int_gte(IntegerVector x, int value);
RcppExport SEXP _timeplyr_any_int_gte(SEXP xSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(any_int_gte(x, value));
    return rcpp_result_gen;
END_RCPP
}
// any_num_gte
bool any_num_gte(NumericVector x, double value, Nullable<NumericVector> tol);
RcppExport SEXP _timeplyr_any_num_gte(SEXP xSEXP, SEXP valueSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(any_num_gte(x, value, tol));
    return rcpp_result_gen;
END_RCPP
}
// any_int_equal
bool any_int_equal(IntegerVector x, int value);
RcppExport SEXP _timeplyr_any_int_equal(SEXP xSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(any_int_equal(x, value));
    return rcpp_result_gen;
END_RCPP
}
// any_num_equal
bool any_num_equal(NumericVector x, double value, Nullable<NumericVector> tol);
RcppExport SEXP _timeplyr_any_num_equal(SEXP xSEXP, SEXP valueSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(any_num_equal(x, value, tol));
    return rcpp_result_gen;
END_RCPP
}
// cpp_df_group_indices
SEXP cpp_df_group_indices(SEXP rows, int size);
RcppExport SEXP _timeplyr_cpp_df_group_indices(SEXP rowsSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_df_group_indices(rows, size));
    return rcpp_result_gen;
END_RCPP
}
// is_whole_num
bool is_whole_num(NumericVector x, Nullable<NumericVector> tol);
RcppExport SEXP _timeplyr_is_whole_num(SEXP xSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(is_whole_num(x, tol));
    return rcpp_result_gen;
END_RCPP
}
// list_rm_null
List list_rm_null(List l);
RcppExport SEXP _timeplyr_list_rm_null(SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(list_rm_null(l));
    return rcpp_result_gen;
END_RCPP
}
// numeric_class
CharacterVector numeric_class(NumericVector x);
RcppExport SEXP _timeplyr_numeric_class(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(numeric_class(x));
    return rcpp_result_gen;
END_RCPP
}
// list_has_interval
bool list_has_interval(List l);
RcppExport SEXP _timeplyr_list_has_interval(SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(list_has_interval(l));
    return rcpp_result_gen;
END_RCPP
}
// list_item_is_interval
LogicalVector list_item_is_interval(List l);
RcppExport SEXP _timeplyr_list_item_is_interval(SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(list_item_is_interval(l));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_cj
List rcpp_cj(List X);
RcppExport SEXP _timeplyr_rcpp_cj(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_cj(X));
    return rcpp_result_gen;
END_RCPP
}
// num_na
int num_na(SEXP x);
RcppExport SEXP _timeplyr_num_na(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(num_na(x));
    return rcpp_result_gen;
END_RCPP
}
// roll_apply_max_fast
NumericVector roll_apply_max_fast(NumericVector x, int before, int after);
RcppExport SEXP _timeplyr_roll_apply_max_fast(SEXP xSEXP, SEXP beforeSEXP, SEXP afterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type before(beforeSEXP);
    Rcpp::traits::input_parameter< int >::type after(afterSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_apply_max_fast(x, before, after));
    return rcpp_result_gen;
END_RCPP
}
// roll_apply_max
NumericVector roll_apply_max(NumericVector x, int before, int after, bool na_rm, bool partial);
RcppExport SEXP _timeplyr_roll_apply_max(SEXP xSEXP, SEXP beforeSEXP, SEXP afterSEXP, SEXP na_rmSEXP, SEXP partialSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type before(beforeSEXP);
    Rcpp::traits::input_parameter< int >::type after(afterSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    Rcpp::traits::input_parameter< bool >::type partial(partialSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_apply_max(x, before, after, na_rm, partial));
    return rcpp_result_gen;
END_RCPP
}
// before_sequence
IntegerVector before_sequence(IntegerVector size, int k);
RcppExport SEXP _timeplyr_before_sequence(SEXP sizeSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(before_sequence(size, k));
    return rcpp_result_gen;
END_RCPP
}
// after_sequence
IntegerVector after_sequence(IntegerVector size, int k);
RcppExport SEXP _timeplyr_after_sequence(SEXP sizeSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(after_sequence(size, k));
    return rcpp_result_gen;
END_RCPP
}
// window_sequence
IntegerVector window_sequence(IntegerVector size, int k, bool partial, bool ascending);
RcppExport SEXP _timeplyr_window_sequence(SEXP sizeSEXP, SEXP kSEXP, SEXP partialSEXP, SEXP ascendingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type partial(partialSEXP);
    Rcpp::traits::input_parameter< bool >::type ascending(ascendingSEXP);
    rcpp_result_gen = Rcpp::wrap(window_sequence(size, k, partial, ascending));
    return rcpp_result_gen;
END_RCPP
}
// lag_sequence
IntegerVector lag_sequence(IntegerVector size, int k);
RcppExport SEXP _timeplyr_lag_sequence(SEXP sizeSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(lag_sequence(size, k));
    return rcpp_result_gen;
END_RCPP
}
// lead_sequence
IntegerVector lead_sequence(IntegerVector size, int k);
RcppExport SEXP _timeplyr_lead_sequence(SEXP sizeSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(lead_sequence(size, k));
    return rcpp_result_gen;
END_RCPP
}
// roll_time_threshold
IntegerVector roll_time_threshold(SEXP x, double threshold, bool switch_on_boundary);
RcppExport SEXP _timeplyr_roll_time_threshold(SEXP xSEXP, SEXP thresholdSEXP, SEXP switch_on_boundarySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< bool >::type switch_on_boundary(switch_on_boundarySEXP);
    rcpp_result_gen = Rcpp::wrap(roll_time_threshold(x, threshold, switch_on_boundary));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_timeplyr_any_int_lt", (DL_FUNC) &_timeplyr_any_int_lt, 2},
    {"_timeplyr_any_num_lt", (DL_FUNC) &_timeplyr_any_num_lt, 3},
    {"_timeplyr_any_int_lte", (DL_FUNC) &_timeplyr_any_int_lte, 2},
    {"_timeplyr_any_num_lte", (DL_FUNC) &_timeplyr_any_num_lte, 3},
    {"_timeplyr_any_int_gt", (DL_FUNC) &_timeplyr_any_int_gt, 2},
    {"_timeplyr_any_num_gt", (DL_FUNC) &_timeplyr_any_num_gt, 3},
    {"_timeplyr_any_int_gte", (DL_FUNC) &_timeplyr_any_int_gte, 2},
    {"_timeplyr_any_num_gte", (DL_FUNC) &_timeplyr_any_num_gte, 3},
    {"_timeplyr_any_int_equal", (DL_FUNC) &_timeplyr_any_int_equal, 2},
    {"_timeplyr_any_num_equal", (DL_FUNC) &_timeplyr_any_num_equal, 3},
    {"_timeplyr_cpp_df_group_indices", (DL_FUNC) &_timeplyr_cpp_df_group_indices, 2},
    {"_timeplyr_is_whole_num", (DL_FUNC) &_timeplyr_is_whole_num, 2},
    {"_timeplyr_list_rm_null", (DL_FUNC) &_timeplyr_list_rm_null, 1},
    {"_timeplyr_numeric_class", (DL_FUNC) &_timeplyr_numeric_class, 1},
    {"_timeplyr_list_has_interval", (DL_FUNC) &_timeplyr_list_has_interval, 1},
    {"_timeplyr_list_item_is_interval", (DL_FUNC) &_timeplyr_list_item_is_interval, 1},
    {"_timeplyr_rcpp_cj", (DL_FUNC) &_timeplyr_rcpp_cj, 1},
    {"_timeplyr_num_na", (DL_FUNC) &_timeplyr_num_na, 1},
    {"_timeplyr_roll_apply_max_fast", (DL_FUNC) &_timeplyr_roll_apply_max_fast, 3},
    {"_timeplyr_roll_apply_max", (DL_FUNC) &_timeplyr_roll_apply_max, 5},
    {"_timeplyr_before_sequence", (DL_FUNC) &_timeplyr_before_sequence, 2},
    {"_timeplyr_after_sequence", (DL_FUNC) &_timeplyr_after_sequence, 2},
    {"_timeplyr_window_sequence", (DL_FUNC) &_timeplyr_window_sequence, 4},
    {"_timeplyr_lag_sequence", (DL_FUNC) &_timeplyr_lag_sequence, 2},
    {"_timeplyr_lead_sequence", (DL_FUNC) &_timeplyr_lead_sequence, 2},
    {"_timeplyr_roll_time_threshold", (DL_FUNC) &_timeplyr_roll_time_threshold, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_timeplyr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
