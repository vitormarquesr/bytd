
functions{
  real loglik_clv(real k, real t, real T, real delta, real lambda, real a, real b){
    real l1;
    real l2;

    l1 = lmultiply(k, lambda) - lbeta(a, b);

    l2 = log(exp(-lambda*T)*beta(a, b + k) + delta*(exp(-lambda*t)*beta(a+1, b + k - 1)));

    return l1 + l2;
  }
}

data{
  int<lower = 1> n;
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
  vector<lower=0>[n] lambda;
}

model {
  alpha ~ gamma(pars_alpha[1], pars_alpha[2]);
  r ~ gamma(pars_r[1], pars_r[2]);
  a ~ gamma(pars_a[1], pars_a[2]);
  b ~ gamma(pars_b[1], pars_b[2]);

  lambda ~ gamma(r, alpha);

  for (i in 1:n){
    target += loglik_clv(k[i], t[i], T[i], delta[i], lambda[i], a, b);
  }

}

generated quantities {
  vector[n] log_lik;
  for (i in 1:n)
    log_lik[i] = loglik_clv(k[i], t[i], T[i], delta[i], lambda[i], a, b);
}
