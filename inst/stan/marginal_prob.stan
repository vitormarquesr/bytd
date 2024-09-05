
functions{
  real loglik_clv(real k, real t, real T, real delta, real r, real alpha, real p){
    real l1;
    real l2;

    l1 = lmultiply(r, alpha) + lmultiply(k, 1 - p) + lgamma(r + k) - lgamma(r);

    l2 = log(1/pow(alpha+T, r + k) + delta*p/((1-p)*pow(alpha+t, r + k)));

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
  vector<lower=0,upper=1>[n] p;
}

model {
  alpha ~ gamma(pars_alpha[1], pars_alpha[2]);
  r ~ gamma(pars_r[1], pars_r[2]);
  a ~ gamma(pars_a[1], pars_a[2]);
  b ~ gamma(pars_b[1], pars_b[2]);

  p ~ beta(a, b);

  for (i in 1:n){
    target += loglik_clv(k[i], t[i], T[i], delta[i], r, alpha, p[i]);
  }

}

generated quantities {
  vector[n] log_lik;
  for (i in 1:n)
    log_lik[i] = loglik_clv(k[i], t[i], T[i], delta[i], r, alpha, p[i]);
}
