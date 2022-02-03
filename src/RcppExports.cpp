// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// accelerations
List accelerations(NumericVector m, NumericMatrix x, NumericMatrix v, NumericMatrix a, double G, double rsmoothsqr, double L);
RcppExport SEXP _nbody_accelerations(SEXP mSEXP, SEXP xSEXP, SEXP vSEXP, SEXP aSEXP, SEXP GSEXP, SEXP rsmoothsqrSEXP, SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type G(GSEXP);
    Rcpp::traits::input_parameter< double >::type rsmoothsqr(rsmoothsqrSEXP);
    Rcpp::traits::input_parameter< double >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(accelerations(m, x, v, a, G, rsmoothsqr, L));
    return rcpp_result_gen;
END_RCPP
}
// energypot
List energypot(NumericVector m, NumericMatrix x, NumericMatrix v, double rsmooth);
RcppExport SEXP _nbody_energypot(SEXP mSEXP, SEXP xSEXP, SEXP vSEXP, SEXP rsmoothSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type v(vSEXP);
    Rcpp::traits::input_parameter< double >::type rsmooth(rsmoothSEXP);
    rcpp_result_gen = Rcpp::wrap(energypot(m, x, v, rsmooth));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_nbody_accelerations", (DL_FUNC) &_nbody_accelerations, 7},
    {"_nbody_energypot", (DL_FUNC) &_nbody_energypot, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_nbody(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}