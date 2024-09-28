
#' Draw samples from a BG/NBD process
#'
#' @param n
#' @param T_max
#' @param alpha
#' @param r
#' @param a
#' @param b
#'
#' @return
#' @export
#'
#' @examples
rbgnbd <- function(n, T_max, alpha, r, a, b){
  T <- ceiling(runif(n, 0, T_max))
  lambda <- rgamma(n, alpha, r)
  p <- rbeta(n, a, b)

  X <- cbind(T, lambda, p)

  res <- apply(X, MARGIN=1, FUN=draw_sample)
}

draw_sample <- function(pars){
  T <- pars[1]
  lambda <- pars[2]
  p <- pars[3]

  N <- rpois(1, lambda*T)
  t <- c(0, sort(ceiling(runif(N, min=0, max=T))))
  t <- t[1:min(N + 1, rgeom(1, 1 - p) + 1)]

  return(t)
}


