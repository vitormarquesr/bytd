
<!-- README.md is generated from README.Rmd. Please edit that file -->

# bytd

<!-- badges: start -->
<!-- badges: end -->

The aim of bytd is to provide a toolkit for fitting the
Beta-Geometric/Negative-Binomial Distribution (BG/NBD) model for CLV
Modeling.

## Installation

You can install the development version of bytd from
[GitHub](https://github.com/) with:

``` r
# install.packages("pak")
pak::pak("vitormarquesr/bytd")
```

## Example

This is a basic example which shows you how to solve a common problem:

``` r
library(bytd)

# Simulating weekly RFM data for a base of 1300 customers
n <- 1300

# observation period of 80 weeks
T <- 80

# average purchase rate of twice per month
pars_gamma <- repar_Gamma(0.5, 0.3)

# average probability of droping out of 0.25.
pars_beta <- repar_Beta(0.25, 0.1)

rfm <- rbgnbd(n, T, pars_gamma[1], pars_gamma[2], pars_beta[1], pars_beta[2])

# fitting the marginalized loglikehood BG/NBD model throught a bayesian approach
m <- bgnbd(rfm, reff="marginal", approach="bayesian", cores=4)

m$fit
#> Inference for Stan model: bgnbd.
#> 4 chains, each with iter=2000; warmup=1000; thin=1; 
#> post-warmup draws per chain=1000, total post-warmup draws=4000.
#> 
#>            mean se_mean   sd      2.5%       25%       50%       75%     97.5%
#> r          2.52    0.00 0.15      2.24      2.42      2.52      2.62      2.85
#> alpha      4.89    0.01 0.37      4.23      4.64      4.88      5.12      5.69
#> a          4.37    0.02 0.81      3.17      3.80      4.25      4.83      6.37
#> b         13.32    0.09 2.94      8.99     11.27     12.83     14.94     20.33
#> lp__  -14775.11    0.04 1.40 -14778.71 -14775.79 -14774.78 -14774.07 -14773.38
#>       n_eff Rhat
#> r      1612 1.00
#> alpha  1508 1.00
#> a      1065 1.01
#> b      1076 1.01
#> lp__   1129 1.00
#> 

```
