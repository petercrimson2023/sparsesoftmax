// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// fista
Rcpp::List fista(double lambda, double L_init, const mat& theta0, const mat& X, const mat& y_one_hot, int max_iter, double eps, double eita, bool loss_compute, int n, int p, int k);
RcppExport SEXP _SparseSoftmax_fista(SEXP lambdaSEXP, SEXP L_initSEXP, SEXP theta0SEXP, SEXP XSEXP, SEXP y_one_hotSEXP, SEXP max_iterSEXP, SEXP epsSEXP, SEXP eitaSEXP, SEXP loss_computeSEXP, SEXP nSEXP, SEXP pSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type L_init(L_initSEXP);
    Rcpp::traits::input_parameter< const mat& >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< const mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const mat& >::type y_one_hot(y_one_hotSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type eita(eitaSEXP);
    Rcpp::traits::input_parameter< bool >::type loss_compute(loss_computeSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(fista(lambda, L_init, theta0, X, y_one_hot, max_iter, eps, eita, loss_compute, n, p, k));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SparseSoftmax_fista", (DL_FUNC) &_SparseSoftmax_fista, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_SparseSoftmax(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}