
#' Get the parameters of a Beta distribution in terms of its mean and standard deviation
#'
#' @param mu
#' @param sd
#'
#' @return
#' @export
#'
#' @examples
repar_Beta <- function(mu, sd){
  alpha <- ((mu*(1 - mu))/(sd^2) - 1)*mu
  beta <- ((mu*(1 - mu))/(sd^2) - 1)*(1 - mu)

  return(c(alpha, beta))
}

#' Get the parameters of a Gamma distribution in terms of its mean and standard deviation
#'
#' @param mu
#' @param sd
#'
#' @return
#' @export
#'
#' @examples
repar_Gamma <- function(mu, sd){
  alpha <- (mu^2)/(sd^2)
  beta <-  mu/(sd^2)

  return(c(alpha, beta))
}
