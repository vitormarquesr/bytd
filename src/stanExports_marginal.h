// Generated by rstantools.  Do not edit by hand.

/*
    bytd is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    bytd is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with bytd.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#ifndef USE_STANC3
#define USE_STANC3
#endif
#include <rstan/rstaninc.hpp>
// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace model_marginal_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 38> locations_array__ =
  {" (found before start of program)",
  " (in 'marginal', line 23, column 2 to column 18)",
  " (in 'marginal', line 24, column 2 to column 22)",
  " (in 'marginal', line 25, column 2 to column 18)",
  " (in 'marginal', line 26, column 2 to column 18)",
  " (in 'marginal', line 41, column 2 to column 20)",
  " (in 'marginal', line 43, column 4 to column 72)",
  " (in 'marginal', line 42, column 2 to line 43, column 72)",
  " (in 'marginal', line 31, column 4 to column 48)",
  " (in 'marginal', line 32, column 4 to column 36)",
  " (in 'marginal', line 33, column 4 to column 36)",
  " (in 'marginal', line 34, column 4 to column 36)",
  " (in 'marginal', line 30, column 20 to line 35, column 3)",
  " (in 'marginal', line 30, column 2 to line 35, column 3)",
  " (in 'marginal', line 37, column 4 to column 69)",
  " (in 'marginal', line 36, column 16 to line 38, column 3)",
  " (in 'marginal', line 36, column 2 to line 38, column 3)",
  " (in 'marginal', line 11, column 2 to column 19)",
  " (in 'marginal', line 12, column 2 to column 15)",
  " (in 'marginal', line 13, column 2 to column 34)",
  " (in 'marginal', line 14, column 2 to column 30)",
  " (in 'marginal', line 15, column 2 to column 30)",
  " (in 'marginal', line 16, column 2 to column 30)",
  " (in 'marginal', line 17, column 20 to column 21)",
  " (in 'marginal', line 17, column 2 to column 25)",
  " (in 'marginal', line 18, column 20 to column 21)",
  " (in 'marginal', line 18, column 2 to column 25)",
  " (in 'marginal', line 19, column 20 to column 21)",
  " (in 'marginal', line 19, column 2 to column 25)",
  " (in 'marginal', line 20, column 20 to column 21)",
  " (in 'marginal', line 20, column 2 to column 29)",
  " (in 'marginal', line 41, column 9 to column 10)",
  " (in 'marginal', line 3, column 4 to column 12)",
  " (in 'marginal', line 4, column 4 to column 12)",
  " (in 'marginal', line 5, column 4 to column 69)",
  " (in 'marginal', line 6, column 4 to column 101)",
  " (in 'marginal', line 7, column 4 to column 19)",
  " (in 'marginal', line 2, column 89 to line 8, column 3)"};
template <typename T0__, typename T1__, typename T2__, typename T3__,
          typename T4__, typename T5__, typename T6__, typename T7__,
          stan::require_all_t<stan::is_stan_scalar<T0__>,
                              stan::is_stan_scalar<T1__>,
                              stan::is_stan_scalar<T2__>,
                              stan::is_stan_scalar<T3__>,
                              stan::is_stan_scalar<T4__>,
                              stan::is_stan_scalar<T5__>,
                              stan::is_stan_scalar<T6__>,
                              stan::is_stan_scalar<T7__>>* = nullptr>
stan::promote_args_t<T0__, T1__, T2__, T3__, T4__,
  stan::promote_args_t<T5__, T6__, T7__>>
loglik_clv(const T0__& k, const T1__& t, const T2__& T, const T3__& delta,
           const T4__& r, const T5__& alpha, const T6__& a, const T7__& b,
           std::ostream* pstream__);
template <typename T0__, typename T1__, typename T2__, typename T3__,
          typename T4__, typename T5__, typename T6__, typename T7__,
          stan::require_all_t<stan::is_stan_scalar<T0__>,
                              stan::is_stan_scalar<T1__>,
                              stan::is_stan_scalar<T2__>,
                              stan::is_stan_scalar<T3__>,
                              stan::is_stan_scalar<T4__>,
                              stan::is_stan_scalar<T5__>,
                              stan::is_stan_scalar<T6__>,
                              stan::is_stan_scalar<T7__>>*>
stan::promote_args_t<T0__, T1__, T2__, T3__, T4__,
  stan::promote_args_t<T5__, T6__, T7__>>
loglik_clv(const T0__& k, const T1__& t, const T2__& T, const T3__& delta,
           const T4__& r, const T5__& alpha, const T6__& a, const T7__& b,
           std::ostream* pstream__) {
  using local_scalar_t__ = stan::promote_args_t<T0__, T1__, T2__, T3__, T4__,
                             stan::promote_args_t<T5__, T6__, T7__>>;
  int current_statement__ = 0;
  static constexpr bool propto__ = true;
  // suppress unused var warning
  (void) propto__;
  local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
  // suppress unused var warning
  (void) DUMMY_VAR__;
  try {
    local_scalar_t__ l1 = DUMMY_VAR__;
    local_scalar_t__ l2 = DUMMY_VAR__;
    current_statement__ = 34;
    l1 = (((stan::math::lgamma((r + k)) - stan::math::lgamma(r)) +
      stan::math::multiply_log(r, alpha)) - stan::math::lbeta(a, b));
    current_statement__ = 35;
    l2 = stan::math::log(((stan::math::beta(a, (b + k)) /
           stan::math::pow((alpha + T), (r + k))) + ((delta *
           stan::math::beta((a + 1), ((b + k) - 1))) /
           stan::math::pow((alpha + t), (r + k)))));
    current_statement__ = 36;
    return (l1 + l2);
  } catch (const std::exception& e) {
    stan::lang::rethrow_located(e, locations_array__[current_statement__]);
  }
}
#include <stan_meta_header.hpp>
class model_marginal final : public model_base_crtp<model_marginal> {
private:
  int n;
  int approach;
  Eigen::Matrix<double,-1,1> pars_alpha_data__;
  Eigen::Matrix<double,-1,1> pars_r_data__;
  Eigen::Matrix<double,-1,1> pars_a_data__;
  Eigen::Matrix<double,-1,1> pars_b_data__;
  Eigen::Matrix<double,-1,1> k_data__;
  Eigen::Matrix<double,-1,1> T_data__;
  Eigen::Matrix<double,-1,1> t_data__;
  Eigen::Matrix<double,-1,1> delta_data__;
  Eigen::Map<Eigen::Matrix<double,-1,1>> pars_alpha{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> pars_r{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> pars_a{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> pars_b{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> k{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> T{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> t{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> delta{nullptr, 0};
public:
  ~model_marginal() {}
  model_marginal(stan::io::var_context& context__, unsigned int
                 random_seed__ = 0, std::ostream* pstream__ = nullptr)
      : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "model_marginal_namespace::model_marginal";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 17;
      context__.validate_dims("data initialization", "n", "int",
        std::vector<size_t>{});
      n = std::numeric_limits<int>::min();
      current_statement__ = 17;
      n = context__.vals_i("n")[(1 - 1)];
      current_statement__ = 17;
      stan::math::check_greater_or_equal(function__, "n", n, 1);
      current_statement__ = 18;
      context__.validate_dims("data initialization", "approach", "int",
        std::vector<size_t>{});
      approach = std::numeric_limits<int>::min();
      current_statement__ = 18;
      approach = context__.vals_i("approach")[(1 - 1)];
      current_statement__ = 19;
      context__.validate_dims("data initialization", "pars_alpha", "double",
        std::vector<size_t>{static_cast<size_t>(2)});
      pars_alpha_data__ = Eigen::Matrix<double,-1,1>::Constant(2,
                            std::numeric_limits<double>::quiet_NaN());
      new (&pars_alpha)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(pars_alpha_data__.data(), 2);
      {
        std::vector<local_scalar_t__> pars_alpha_flat__;
        current_statement__ = 19;
        pars_alpha_flat__ = context__.vals_r("pars_alpha");
        current_statement__ = 19;
        pos__ = 1;
        current_statement__ = 19;
        for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
          current_statement__ = 19;
          stan::model::assign(pars_alpha, pars_alpha_flat__[(pos__ - 1)],
            "assigning variable pars_alpha", stan::model::index_uni(sym1__));
          current_statement__ = 19;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 19;
      stan::math::check_greater_or_equal(function__, "pars_alpha",
        pars_alpha, 0);
      current_statement__ = 20;
      context__.validate_dims("data initialization", "pars_r", "double",
        std::vector<size_t>{static_cast<size_t>(2)});
      pars_r_data__ = Eigen::Matrix<double,-1,1>::Constant(2,
                        std::numeric_limits<double>::quiet_NaN());
      new (&pars_r)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(pars_r_data__.data(), 2);
      {
        std::vector<local_scalar_t__> pars_r_flat__;
        current_statement__ = 20;
        pars_r_flat__ = context__.vals_r("pars_r");
        current_statement__ = 20;
        pos__ = 1;
        current_statement__ = 20;
        for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
          current_statement__ = 20;
          stan::model::assign(pars_r, pars_r_flat__[(pos__ - 1)],
            "assigning variable pars_r", stan::model::index_uni(sym1__));
          current_statement__ = 20;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 20;
      stan::math::check_greater_or_equal(function__, "pars_r", pars_r, 0);
      current_statement__ = 21;
      context__.validate_dims("data initialization", "pars_a", "double",
        std::vector<size_t>{static_cast<size_t>(2)});
      pars_a_data__ = Eigen::Matrix<double,-1,1>::Constant(2,
                        std::numeric_limits<double>::quiet_NaN());
      new (&pars_a)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(pars_a_data__.data(), 2);
      {
        std::vector<local_scalar_t__> pars_a_flat__;
        current_statement__ = 21;
        pars_a_flat__ = context__.vals_r("pars_a");
        current_statement__ = 21;
        pos__ = 1;
        current_statement__ = 21;
        for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
          current_statement__ = 21;
          stan::model::assign(pars_a, pars_a_flat__[(pos__ - 1)],
            "assigning variable pars_a", stan::model::index_uni(sym1__));
          current_statement__ = 21;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 21;
      stan::math::check_greater_or_equal(function__, "pars_a", pars_a, 0);
      current_statement__ = 22;
      context__.validate_dims("data initialization", "pars_b", "double",
        std::vector<size_t>{static_cast<size_t>(2)});
      pars_b_data__ = Eigen::Matrix<double,-1,1>::Constant(2,
                        std::numeric_limits<double>::quiet_NaN());
      new (&pars_b)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(pars_b_data__.data(), 2);
      {
        std::vector<local_scalar_t__> pars_b_flat__;
        current_statement__ = 22;
        pars_b_flat__ = context__.vals_r("pars_b");
        current_statement__ = 22;
        pos__ = 1;
        current_statement__ = 22;
        for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
          current_statement__ = 22;
          stan::model::assign(pars_b, pars_b_flat__[(pos__ - 1)],
            "assigning variable pars_b", stan::model::index_uni(sym1__));
          current_statement__ = 22;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 22;
      stan::math::check_greater_or_equal(function__, "pars_b", pars_b, 0);
      current_statement__ = 23;
      stan::math::validate_non_negative_index("k", "n", n);
      current_statement__ = 24;
      context__.validate_dims("data initialization", "k", "double",
        std::vector<size_t>{static_cast<size_t>(n)});
      k_data__ = Eigen::Matrix<double,-1,1>::Constant(n,
                   std::numeric_limits<double>::quiet_NaN());
      new (&k) Eigen::Map<Eigen::Matrix<double,-1,1>>(k_data__.data(), n);
      {
        std::vector<local_scalar_t__> k_flat__;
        current_statement__ = 24;
        k_flat__ = context__.vals_r("k");
        current_statement__ = 24;
        pos__ = 1;
        current_statement__ = 24;
        for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
          current_statement__ = 24;
          stan::model::assign(k, k_flat__[(pos__ - 1)],
            "assigning variable k", stan::model::index_uni(sym1__));
          current_statement__ = 24;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 24;
      stan::math::check_greater_or_equal(function__, "k", k, 0);
      current_statement__ = 25;
      stan::math::validate_non_negative_index("T", "n", n);
      current_statement__ = 26;
      context__.validate_dims("data initialization", "T", "double",
        std::vector<size_t>{static_cast<size_t>(n)});
      T_data__ = Eigen::Matrix<double,-1,1>::Constant(n,
                   std::numeric_limits<double>::quiet_NaN());
      new (&T) Eigen::Map<Eigen::Matrix<double,-1,1>>(T_data__.data(), n);
      {
        std::vector<local_scalar_t__> T_flat__;
        current_statement__ = 26;
        T_flat__ = context__.vals_r("T");
        current_statement__ = 26;
        pos__ = 1;
        current_statement__ = 26;
        for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
          current_statement__ = 26;
          stan::model::assign(T, T_flat__[(pos__ - 1)],
            "assigning variable T", stan::model::index_uni(sym1__));
          current_statement__ = 26;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 26;
      stan::math::check_greater_or_equal(function__, "T", T, 0);
      current_statement__ = 27;
      stan::math::validate_non_negative_index("t", "n", n);
      current_statement__ = 28;
      context__.validate_dims("data initialization", "t", "double",
        std::vector<size_t>{static_cast<size_t>(n)});
      t_data__ = Eigen::Matrix<double,-1,1>::Constant(n,
                   std::numeric_limits<double>::quiet_NaN());
      new (&t) Eigen::Map<Eigen::Matrix<double,-1,1>>(t_data__.data(), n);
      {
        std::vector<local_scalar_t__> t_flat__;
        current_statement__ = 28;
        t_flat__ = context__.vals_r("t");
        current_statement__ = 28;
        pos__ = 1;
        current_statement__ = 28;
        for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
          current_statement__ = 28;
          stan::model::assign(t, t_flat__[(pos__ - 1)],
            "assigning variable t", stan::model::index_uni(sym1__));
          current_statement__ = 28;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 28;
      stan::math::check_greater_or_equal(function__, "t", t, 0);
      current_statement__ = 29;
      stan::math::validate_non_negative_index("delta", "n", n);
      current_statement__ = 30;
      context__.validate_dims("data initialization", "delta", "double",
        std::vector<size_t>{static_cast<size_t>(n)});
      delta_data__ = Eigen::Matrix<double,-1,1>::Constant(n,
                       std::numeric_limits<double>::quiet_NaN());
      new (&delta)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(delta_data__.data(), n);
      {
        std::vector<local_scalar_t__> delta_flat__;
        current_statement__ = 30;
        delta_flat__ = context__.vals_r("delta");
        current_statement__ = 30;
        pos__ = 1;
        current_statement__ = 30;
        for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
          current_statement__ = 30;
          stan::model::assign(delta, delta_flat__[(pos__ - 1)],
            "assigning variable delta", stan::model::index_uni(sym1__));
          current_statement__ = 30;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 30;
      stan::math::check_greater_or_equal(function__, "delta", delta, 0);
      current_statement__ = 31;
      stan::math::validate_non_negative_index("log_lik", "n", n);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + 1 + 1;
  }
  inline std::string model_name() const final {
    return "model_marginal";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.2",
             "stancflags = --allow-undefined"};
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI,
            stan::require_vector_like_t<VecR>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR>
  log_prob_impl(VecR& params_r__, VecI& params_i__, std::ostream*
                pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    static constexpr const char* function__ =
      "model_marginal_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      local_scalar_t__ r = DUMMY_VAR__;
      current_statement__ = 1;
      r = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
            lp__);
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 2;
      alpha = in__.template read_constrain_lb<local_scalar_t__,
                jacobian__>(0, lp__);
      local_scalar_t__ a = DUMMY_VAR__;
      current_statement__ = 3;
      a = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
            lp__);
      local_scalar_t__ b = DUMMY_VAR__;
      current_statement__ = 4;
      b = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
            lp__);
      {
        current_statement__ = 13;
        if (stan::math::logical_eq(approach, 1)) {
          current_statement__ = 8;
          lp_accum__.add(stan::math::gamma_lpdf<propto__>(alpha,
                           stan::model::rvalue(pars_alpha, "pars_alpha",
                             stan::model::index_uni(1)),
                           stan::model::rvalue(pars_alpha, "pars_alpha",
                             stan::model::index_uni(2))));
          current_statement__ = 9;
          lp_accum__.add(stan::math::gamma_lpdf<propto__>(r,
                           stan::model::rvalue(pars_r, "pars_r",
                             stan::model::index_uni(1)),
                           stan::model::rvalue(pars_r, "pars_r",
                             stan::model::index_uni(2))));
          current_statement__ = 10;
          lp_accum__.add(stan::math::gamma_lpdf<propto__>(a,
                           stan::model::rvalue(pars_a, "pars_a",
                             stan::model::index_uni(1)),
                           stan::model::rvalue(pars_a, "pars_a",
                             stan::model::index_uni(2))));
          current_statement__ = 11;
          lp_accum__.add(stan::math::gamma_lpdf<propto__>(b,
                           stan::model::rvalue(pars_b, "pars_b",
                             stan::model::index_uni(1)),
                           stan::model::rvalue(pars_b, "pars_b",
                             stan::model::index_uni(2))));
        }
        current_statement__ = 16;
        for (int i = 1; i <= n; ++i) {
          current_statement__ = 14;
          lp_accum__.add(loglik_clv(
                           stan::model::rvalue(k, "k",
                             stan::model::index_uni(i)),
                           stan::model::rvalue(t, "t",
                             stan::model::index_uni(i)),
                           stan::model::rvalue(T, "T",
                             stan::model::index_uni(i)),
                           stan::model::rvalue(delta, "delta",
                             stan::model::index_uni(i)), r, alpha, a, b,
                           pstream__));
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
  }
  template <typename RNG, typename VecR, typename VecI, typename VecVar,
            stan::require_vector_like_vt<std::is_floating_point,
            VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral,
            VecI>* = nullptr, stan::require_vector_vt<std::is_floating_point,
            VecVar>* = nullptr>
  inline void
  write_array_impl(RNG& base_rng__, VecR& params_r__, VecI& params_i__,
                   VecVar& vars__, const bool
                   emit_transformed_parameters__ = true, const bool
                   emit_generated_quantities__ = true, std::ostream*
                   pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    // suppress unused var warning
    (void) propto__;
    double lp__ = 0.0;
    // suppress unused var warning
    (void) lp__;
    int current_statement__ = 0;
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    constexpr bool jacobian__ = false;
    static constexpr const char* function__ =
      "model_marginal_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      double r = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      r = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
            lp__);
      double alpha = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      alpha = in__.template read_constrain_lb<local_scalar_t__,
                jacobian__>(0, lp__);
      double a = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      a = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
            lp__);
      double b = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 4;
      b = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
            lp__);
      out__.write(r);
      out__.write(alpha);
      out__.write(a);
      out__.write(b);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
      Eigen::Matrix<double,-1,1> log_lik =
        Eigen::Matrix<double,-1,1>::Constant(n,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 7;
      for (int i = 1; i <= n; ++i) {
        current_statement__ = 6;
        stan::model::assign(log_lik,
          loglik_clv(stan::model::rvalue(k, "k", stan::model::index_uni(i)),
            stan::model::rvalue(t, "t", stan::model::index_uni(i)),
            stan::model::rvalue(T, "T", stan::model::index_uni(i)),
            stan::model::rvalue(delta, "delta", stan::model::index_uni(i)),
            r, alpha, a, b, pstream__), "assigning variable log_lik",
          stan::model::index_uni(i));
      }
      out__.write(log_lik);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, typename VecI,
            stan::require_vector_t<VecVar>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void
  unconstrain_array_impl(const VecVar& params_r__, const VecI& params_i__,
                         VecVar& vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ r = DUMMY_VAR__;
      current_statement__ = 1;
      r = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, r);
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 2;
      alpha = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, alpha);
      local_scalar_t__ a = DUMMY_VAR__;
      current_statement__ = 3;
      a = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, a);
      local_scalar_t__ b = DUMMY_VAR__;
      current_statement__ = 4;
      b = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, b);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, stan::require_vector_t<VecVar>* = nullptr>
  inline void
  transform_inits_impl(const stan::io::var_context& context__, VecVar&
                       vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      current_statement__ = 1;
      context__.validate_dims("parameter initialization", "r", "double",
        std::vector<size_t>{});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "alpha", "double",
        std::vector<size_t>{});
      current_statement__ = 3;
      context__.validate_dims("parameter initialization", "a", "double",
        std::vector<size_t>{});
      current_statement__ = 4;
      context__.validate_dims("parameter initialization", "b", "double",
        std::vector<size_t>{});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ r = DUMMY_VAR__;
      current_statement__ = 1;
      r = context__.vals_r("r")[(1 - 1)];
      out__.write_free_lb(0, r);
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 2;
      alpha = context__.vals_r("alpha")[(1 - 1)];
      out__.write_free_lb(0, alpha);
      local_scalar_t__ a = DUMMY_VAR__;
      current_statement__ = 3;
      a = context__.vals_r("a")[(1 - 1)];
      out__.write_free_lb(0, a);
      local_scalar_t__ b = DUMMY_VAR__;
      current_statement__ = 4;
      b = context__.vals_r("b")[(1 - 1)];
      out__.write_free_lb(0, b);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"r", "alpha", "a", "b"};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      std::vector<std::string> temp{"log_lik"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
                std::vector<size_t>{}, std::vector<size_t>{},
                std::vector<size_t>{}};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(n)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "r");
    param_names__.emplace_back(std::string() + "alpha");
    param_names__.emplace_back(std::string() + "a");
    param_names__.emplace_back(std::string() + "b");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
        param_names__.emplace_back(std::string() + "log_lik" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "r");
    param_names__.emplace_back(std::string() + "alpha");
    param_names__.emplace_back(std::string() + "a");
    param_names__.emplace_back(std::string() + "b");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
        param_names__.emplace_back(std::string() + "log_lik" + '.' +
          std::to_string(sym1__));
      }
    }
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"r\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(n) + "},\"block\":\"generated_quantities\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"r\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(n) + "},\"block\":\"generated_quantities\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (((1 + 1) + 1) + 1);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * (n);
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    std::vector<int> params_i;
    vars = Eigen::Matrix<double,-1,1>::Constant(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <typename RNG> inline void
  write_array(RNG& base_rng, std::vector<double>& params_r, std::vector<int>&
              params_i, std::vector<double>& vars, bool
              emit_transformed_parameters = true, bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (((1 + 1) + 1) + 1);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * (n);
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    vars = std::vector<double>(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(Eigen::Matrix<T_,-1,1>& params_r, std::ostream* pstream = nullptr) const {
    Eigen::Matrix<int,-1,1> params_i;
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(std::vector<T_>& params_r, std::vector<int>& params_i,
           std::ostream* pstream = nullptr) const {
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  inline void
  transform_inits(const stan::io::var_context& context,
                  Eigen::Matrix<double,-1,1>& params_r, std::ostream*
                  pstream = nullptr) const final {
    std::vector<double> params_r_vec(params_r.size());
    std::vector<int> params_i;
    transform_inits(context, params_i, params_r_vec, pstream);
    params_r = Eigen::Map<Eigen::Matrix<double,-1,1>>(params_r_vec.data(),
                 params_r_vec.size());
  }
  inline void
  transform_inits(const stan::io::var_context& context, std::vector<int>&
                  params_i, std::vector<double>& vars, std::ostream*
                  pstream__ = nullptr) const {
    vars.resize(num_params_r__);
    transform_inits_impl(context, vars, pstream__);
  }
  inline void
  unconstrain_array(const std::vector<double>& params_constrained,
                    std::vector<double>& params_unconstrained, std::ostream*
                    pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = std::vector<double>(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
  inline void
  unconstrain_array(const Eigen::Matrix<double,-1,1>& params_constrained,
                    Eigen::Matrix<double,-1,1>& params_unconstrained,
                    std::ostream* pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = Eigen::Matrix<double,-1,1>::Constant(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
};
}
using stan_model = model_marginal_namespace::model_marginal;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_marginal_namespace::profiles__;
}
#endif
#endif
