
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
rbgnbd <- function(n, T_max, r, alpha, a, b){
  T <- ceiling(runif(n, 0.8*T_max, T_max))
  lambda <- rgamma(n, shape=r, rate=alpha)
  p <- rbeta(n, a, b)

  X <- cbind(T, lambda, p)

  res <- apply(X, MARGIN=1, FUN=draw_sample)

  res <- Reduce(rbind, Map(fr_summary, res), init=c())
  colnames(res) <- c("frequency", "recency")

  res <- data.frame(cbind(res, X))

}

draw_sample <- function(pars){
  T <- pars[1]
  lambda <- pars[2]
  p <- pars[3]

  t <- c(0)
  repeat{
    ts <- rexp(1, lambda) + max(t)
    # They are always active at the beginning of the observation period (Paper)
    if ((length(t) > 1) & sample(c(0, 1), 1, prob=c(1-p, p)) | (ts > T)){
      break
    }
    t <- append(t, ts)
  }

  return(t)
}

fr_summary <- function(samp){
  return(c(length(samp) - 1, max(samp)))
}

