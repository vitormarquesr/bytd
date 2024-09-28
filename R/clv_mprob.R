
#' Marginalized BG/NBD model keeping Prob as random effect
#'
#' @param rfmt
#' @param pars_alpha
#' @param pars_r
#' @param pars_a
#' @param pars_b
#' @param ...
#'
#' @return
#' @export
#'
#' @examples
clv_mprob <- function(rfmt,
                        pars_alpha=c(0.01, 0.01),
                        pars_r=c(0.01, 0.01),
                        pars_a=c(0.01, 0.01),
                        pars_b=c(0.01, 0.01),
                        ...){

  data <- list(
    n = nrow(rfmt),
    k = rfmt[["frequency"]],
    T = rfmt[["T"]],
    t = rfmt[["recency"]],
    delta = (rfmt[["frequency"]] > 0) * 1,
    pars_alpha,
    pars_r,
    pars_a,
    pars_b
  )

  t_init <- Sys.time()
  fit <- rstan::sampling(stanmodels$mprob, data=data, ...)
  t_final <- Sys.time()

  out <- list(rtime = t_final - t_init,
              fit = fit)

  return(out)
}
