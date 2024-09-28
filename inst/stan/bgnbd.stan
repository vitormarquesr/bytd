
functions{
#include /chunks/loglikelihoods.stan
}

data{
  int<lower = 1> n;
  int reff; //1 - full, 2 - mlamba, 3 - mprob, 4 - marginal
  int approach; // 1 - bayesiano; 0 - clássico (se aplicável)
  vector<lower = 0>[2] pars_alpha;
  vector<lower = 0>[2] pars_r;
  vector<lower = 0>[2] pars_a;
  vector<lower = 0>[2] pars_b;
  vector<lower = 0>[n] k; // Número de Compras Observadas
  vector<lower = 0>[n] T; // Tempo de observação total
  vector<lower = 0>[n] t; // Tempo até compra mais recente
  vector<lower = 0>[n] delta; // Indicador de número de compras maior que zero
}

transformed data{
  int has_lambda = 0;
  int has_prob = 0;

  if (reff == 1 || reff == 2){
    has_lambda = 1;
  }

  if (reff == 1 || reff == 3){
    has_prob = 1;
  }
}

parameters {
  real<lower=0> alpha;
  real<lower=0> r;
  real<lower=0> a;
  real<lower=0> b;
  vector<lower=0>[has_lambda == 0 ? 0 : n] lambda;
  vector<lower=0,upper=1>[has_prob == 0 ? 0 : n] p;
}

model {
  if (reff !=  4 || approach != 0){
      alpha ~ gamma(pars_alpha[1], pars_alpha[2]);
      r ~ gamma(pars_r[1], pars_r[2]);
      a ~ gamma(pars_a[1], pars_a[2]);
      b ~ gamma(pars_b[1], pars_b[2]);
  }

  if (has_lambda){
    lambda ~ gamma(r, alpha);
  }
  if (has_prob){
    p ~ beta(a, b);
  }

    for (i in 1:n){
        if (reff == 1){
          target += loglik_full(k[i], t[i], T[i], delta[i], lambda[i], p[i]);
        }else if (reff == 2){
          target += loglik_mlambda(k[i], t[i], T[i], delta[i], lambda[i], a, b);
        }else if (reff == 3){
          target += loglik_mprob(k[i], t[i], T[i], delta[i], r, alpha, p[i]);
        }else if (reff == 4){
          target += loglik_marginal(k[i], t[i], T[i], delta[i], r, alpha, a, b);
        }
  }
}

