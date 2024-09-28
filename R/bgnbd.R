
#' Fit a BG/NBD model with or without random effects
#'
#' @param rfmt
#' @param reff
#' @param pars_alpha
#' @param pars_r
#' @param pars_a
#' @param pars_b
#' @param approach
#' @param ...
#'
#' @return
#' @export
#'
#' @examples
bgnbd <- function(rfmt,
                      reff=c("marginal", "prob", "lambda", "full"),
                      pars_alpha=c(0.01, 0.01),
                      pars_r=c(0.01, 0.01),
                      pars_a=c(0.01, 0.01),
                      pars_b=c(0.01, 0.01),
                      approach=c("bayesian", "classical"),
                      ...){
  reff = match.arg(reff)
  approach = match.arg(approach)

  reff <- switch(reff,
         marginal = 4,
         prob = 3,
         lambda = 2,
         full = 1)

  approach = switch(approach,
                    bayesian = 1,
                    classical = 0)
  data <- list(
    n = nrow(rfmt),
    reff = reff,
    k = rfmt[["frequency"]],
    T = rfmt[["T"]],
    t = rfmt[["recency"]],
    delta = (rfmt[["frequency"]] > 0) * 1,
    pars_alpha,
    pars_r,
    pars_a,
    pars_b,
    approach=approach
  )

  t_init <- Sys.time()
  if ((reff == 4) & (approach == 0)){
    fit <- rstan::optimizing(stanmodels$bgnbd, data=data, ...)
  }else{
    fit <- rstan::sampling(stanmodels$bgnbd, data=data, ...)
  }

  t_final <- Sys.time()

  out <- list(rtime = t_final - t_init,
              fit = fit)

  return(out)
}
