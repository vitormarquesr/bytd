
functions{
  vector loglik_clv(vector k, vector t, vector T, vector delta, vector lambda, vector p) {
    int n = num_elements(k);
    vector[n] logterm_a;
    vector[n] logterm_b;
    vector[n] term_b_1;
    vector[n] term_b_2;

    logterm_a = lmultiply(k, (1-p)) + lmultiply(k, lambda) - t .* lambda;
    term_b_1 = -lambda .* (T - t);
    term_b_2 = logit(p);

    for (i in 1:n){
      logterm_b[i] = log_sum_exp(term_b_1[i], term_b_2[i]) * delta[i] + term_b_1[i]*(1 - delta[i]);
    }

    return logterm_a + logterm_b;
  }
}

data {
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

parameters {
  real<lower=0> alpha;
  real<lower=0> r;
  real<lower=0> a;
  real<lower=0> b;
  vector<lower=0>[n] lambda;
  vector<lower=0,upper=1>[n] p;
}

model {
  alpha ~ gamma(pars_alpha[1], pars_alpha[2]);
  r ~ gamma(pars_r[1], pars_r[2]);
  a ~ gamma(pars_a[1], pars_a[2]);
  b ~ gamma(pars_b[1], pars_b[2]);

  lambda ~ gamma(r, alpha);
  p ~ beta(a, b);

  target += sum(loglik_clv(k, t, T, delta, lambda, p));

}
