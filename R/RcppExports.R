# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

fista <- function(lambda, L_init, theta0, X, y_one_hot, max_iter = 10000L, eps = 1e-6, eita = 1.2, loss_compute = TRUE, n = 1L, p = 1L, k = 1L) {
    .Call(`_SparseSoftmax_fista`, lambda, L_init, theta0, X, y_one_hot, max_iter, eps, eita, loss_compute, n, p, k)
}

