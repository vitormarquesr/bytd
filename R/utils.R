
repar_Beta <- function(mu, sd){
  alpha <- ((mu*(1 - mu))/(sd^2) - 1)*mu
  beta <- ((mu*(1 - mu))/(sd^2) - 1)*(1 - mu)

  return(c(alpha, beta))
}

repar_Gamma <- function(mu, sd){
  alpha <- (mu^2)/(sd^2)
  beta <-  mu/(sd^2)

  return(c(alpha, beta))
}
