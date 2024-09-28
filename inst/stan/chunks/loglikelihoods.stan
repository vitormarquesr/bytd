
real loglik_full(real k, real t, real T, real delta, real lambda, real p) {
    real logterm_a;
    real logterm_b;
    real term_b_1;
    real term_b_2;

    logterm_a = lmultiply(k, (1-p)) + lmultiply(k, lambda) - t * lambda;
    term_b_1 = -lambda * (T - t);
    term_b_2 = logit(p);

    logterm_b = log_sum_exp(term_b_1, term_b_2) * delta + term_b_1*(1 - delta);

    return logterm_a + logterm_b;
  }

real loglik_marginal(real k, real t, real T, real delta, real r, real alpha, real a, real b){
    real l1;
    real l2;

    l1 = lgamma(r+k) - lgamma(r) + lmultiply(r, alpha) - lbeta(a, b);

    l2 = log(beta(a, b+k)/pow(alpha+T, r + k) + delta*beta(a + 1, b + k - 1)/pow((alpha + t), r +k));

    return l1 + l2;
}

real loglik_mlambda(real k, real t, real T, real delta, real lambda, real a, real b){
    real l1;
    real l2;

    l1 = lmultiply(k, lambda) - lbeta(a, b);

    l2 = log(exp(-lambda*T)*beta(a, b + k) + delta*(exp(-lambda*t)*beta(a+1, b + k - 1)));

    return l1 + l2;
}

real loglik_mprob(real k, real t, real T, real delta, real r, real alpha, real p){
    real l1;
    real l2;

    l1 = lmultiply(r, alpha) + lmultiply(k, 1 - p) + lgamma(r + k) - lgamma(r);

    l2 = log(1/pow(alpha+T, r + k) + delta*p/((1-p)*pow(alpha+t, r + k)));

    return l1 + l2;
}
