
functions{
  real loglik_clv(real k, real t, real T, real delta, real r, real alpha, real a, real b){
    real l1;
    real l2;

    l1 = lgamma(r+k) - lgamma(r) + lmultiply(r, alpha) - lbeta(a, b);

    l2 = log(beta(a, b+k)/pow(alpha+T, r + k) + delta*beta(a + 1, b + k - 1)/pow((alpha + t), r +k));

    return l1 + l2;
  }
}

data{
  int<lower = 1> n;
  int approach;
  vector<lower = 0>[2] pars_alpha;
  vector<lower = 0>[2] pars_r;
  vector<lower = 0>[2] pars_a;
  vector<lower = 0>[2] pars_b;
  vector<lower = 0>[n] k; // Número de Compras Observadas
  vector<lower = 0>[n] T; // Tempo de observação total
  vector<lower = 0>[n] t; // Tempo até compra mais recente
  vector<lower = 0>[n] delta; // Indicador de número de compras maior que zero

}

parameters{
  real<lower=0> r;
  real<lower=0> alpha;
  real<lower=0> a;
  real<lower=0> b;
}

model {
  //Bayesiano
  if (approach == 1){
    alpha ~ gamma(pars_alpha[1], pars_alpha[2]);
    r ~ gamma(pars_r[1], pars_r[2]);
    a ~ gamma(pars_a[1], pars_a[2]);
    b ~ gamma(pars_b[1], pars_b[2]);
  }

  for (i in 1:n){
    target += loglik_clv(k[i], t[i], T[i], delta[i], r, alpha, a, b);
  }

}

generated quantities {
  vector[n] log_lik;
  for (i in 1:n)
    log_lik[i] = loglik_clv(k[i], t[i], T[i], delta[i], r, alpha, a, b);
}
