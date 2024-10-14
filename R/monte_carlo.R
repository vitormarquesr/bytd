
#' Evaluate model performance with simulated data
#'
#' @param n_reps
#' @param file
#' @param real
#' @param ...
#'
#' @return
#' @export
#'
#' @examples
monte_carlo <- function(n_reps, real, file="inst/stuff/Monte_Carlo/simulation.txt", ...){
  for(r in seq_len(n_reps)){
    iter_mc(r, real, file, ...)
  }
  simulation <- read.table(file)
  names(simulation) <- c("par", "real", "estimate", "se", "lwr", "upr", "RB", "CP", "rep")

  tb <- simulation |>
    dplyr::group_by(par) |>
    dplyr::summarise(
      dplyr::across(dplyr::everything(), mean)
    ) |>
    dplyr::select(-rep) |>
    as.data.frame()

  return(tb)
}

iter_mc <- function(r, real, file, ...){
  set.seed(r)
  rfm_sim <- do.call("rbgnbd", as.list(real))

  fit <- bgnbd(rfm_sim, ...)

  tb <- rstan::summary(fit$fit, pars = c("r", "alpha", "a", "b"))
  tb <- as.data.frame(tb$summary[, c(1, 3, 4, 8)])

  par <- rownames(tb)
  row.names(tb) <- NULL
  names(tb) <- c("estimate", "se", "lwr", "upr")
  tb <- data.frame(
    par = par,
    real = real[c(-1, -2)]
  ) |>
    dplyr::bind_cols(tb) |>
    dplyr::mutate(
      RB = 100*(estimate-real)/abs(real),
      CP = real > lwr & real < upr,
      rep = r
    )

  write.table(tb, file = file, row.names = FALSE, col.names = FALSE, append = TRUE)

}
