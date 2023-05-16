#include "s21_math.h"
#include <check.h>
#include <stdlib.h>
#include <math.h>

#define DIFF pow(10, -7)

// abs

START_TEST(abs_1) {
    ck_assert_int_eq(abs(-321), s21_abs(-321));
} END_TEST

START_TEST(abs_2) {
    ck_assert_int_eq(abs(-87646), s21_abs(-87646));
} END_TEST

START_TEST(abs_3) {
    ck_assert_int_eq(abs(-3), s21_abs(-3));
} END_TEST

START_TEST(abs_4) {
    ck_assert_int_eq(abs(657575), s21_abs(657575));
} END_TEST

START_TEST(abs_5) {
    ck_assert_int_eq(abs(-2147483647), s21_abs(-2147483647));
} END_TEST

// fabs

START_TEST(fabs_1) {
    ck_assert_double_nan(s21_fabs(s21_nan));
    ck_assert_double_nan(fabs(s21_nan));
} END_TEST

START_TEST(fabs_2) {
    ck_assert_double_eq_tol(fabs(0.0), s21_fabs(0.0), 1e-6);
} END_TEST

START_TEST(fabs_3) {
    ck_assert_double_eq_tol(fabs(-0.0), s21_fabs(-0.0), 1e-6);
} END_TEST

START_TEST(fabs_4) {
    ck_assert_double_eq(fabs(NEG_INF), s21_fabs(NEG_INF));
} END_TEST

START_TEST(fabs_5) {
    ck_assert_double_eq_tol(fabs(-2147483.647), s21_fabs(-2147483.647), 1e-6);
} END_TEST

START_TEST(fabs_6) {
    ck_assert_double_eq(fabs(POS_INF), s21_fabs(POS_INF));
} END_TEST

START_TEST(fabs_7) {
    ck_assert_double_eq_tol(fabs(7478.9283746), s21_fabs(7478.9283746), 1e-6);
} END_TEST

START_TEST(fabs_8) {
    ck_assert_double_eq_tol(fabs(56.0), s21_fabs(56.0), 1e-6);
} END_TEST

START_TEST(fabs_9) {
    ck_assert_double_eq_tol(fabs(-56.0), s21_fabs(-56.0), 1e-6);
} END_TEST

START_TEST(fabs_10) {
    ck_assert_double_eq_tol(fabs(-563672364872.2156), s21_fabs(-563672364872.2156), 1e-6);
} END_TEST

START_TEST(fabs_11) {
    ck_assert_double_eq_tol(fabs(549876.6758019836), s21_fabs(549876.6758019836), 1e-6);
} END_TEST

// ceil

START_TEST(ceil_1) {
    ck_assert_double_nan(s21_ceil(s21_nan));
    ck_assert_double_nan(ceil(s21_nan));
} END_TEST

START_TEST(ceil_2) {
    ck_assert_double_eq_tol(ceil(0.0), s21_ceil(0.0), 1e-6);
} END_TEST

START_TEST(ceil_3) {
    ck_assert_double_eq_tol(ceil(-0.0), s21_ceil(-0.0), 1e-6);
} END_TEST

START_TEST(ceil_4) {
    ck_assert_double_eq(ceil(NEG_INF), s21_ceil(NEG_INF));
} END_TEST

START_TEST(ceil_5) {
    ck_assert_double_eq_tol(ceil(-2147483.647), s21_ceil(-2147483.647), 1e-6);
} END_TEST

START_TEST(ceil_6) {
    ck_assert_double_eq(ceil(POS_INF), s21_ceil(POS_INF));
} END_TEST

START_TEST(ceil_7) {
    ck_assert_double_eq_tol(ceil(7478.9283746), s21_ceil(7478.9283746), 1e-6);
} END_TEST

START_TEST(ceil_8) {
    ck_assert_double_eq_tol(ceil(76.0), s21_ceil(76.0), 1e-6);
} END_TEST

START_TEST(ceil_9) {
    ck_assert_double_eq_tol(ceil(-76.0), s21_ceil(-76.0), 1e-6);
} END_TEST

START_TEST(ceil_10) {
    ck_assert_double_eq_tol(ceil(-563672364872.2156), s21_ceil(-563672364872.2156), 1e-6);
} END_TEST

START_TEST(ceil_11) {
    ck_assert_double_eq_tol(ceil(549876.6758019836), s21_ceil(549876.6758019836), 1e-6);
} END_TEST

// floor

START_TEST(floor_1) {
    ck_assert_double_nan(s21_floor(s21_nan));
    ck_assert_double_nan(floor(s21_nan));
} END_TEST

START_TEST(floor_2) {
    ck_assert_double_eq_tol(floor(0.0), s21_floor(0.0), 1e-6);
} END_TEST

START_TEST(floor_3) {
    ck_assert_double_eq_tol(floor(-0.0), s21_floor(-0.0), 1e-6);
} END_TEST

START_TEST(floor_4) {
    ck_assert_double_eq(floor(NEG_INF), s21_floor(NEG_INF));
} END_TEST

START_TEST(floor_5) {
    ck_assert_double_eq_tol(floor(-2147483.647), s21_floor(-2147483.647), 1e-6);
} END_TEST

START_TEST(floor_6) {
    ck_assert_double_eq(floor(POS_INF), s21_floor(POS_INF));
} END_TEST

START_TEST(floor_7) {
    ck_assert_double_eq_tol(floor(7478.9283746), s21_floor(7478.9283746), 1e-6);
} END_TEST

START_TEST(floor_8) {
    ck_assert_double_eq_tol(floor(34.0), s21_floor(34.0), 1e-6);
} END_TEST

START_TEST(floor_9) {
    ck_assert_double_eq_tol(floor(-34.0), s21_floor(-34.0), 1e-6);
} END_TEST

START_TEST(floor_10) {
    ck_assert_double_eq_tol(floor(-563672364872.2156), s21_floor(-563672364872.2156), 1e-6);
} END_TEST

START_TEST(floor_11) {
    ck_assert_double_eq_tol(floor(549876.6758019836), s21_floor(549876.6758019836), 1e-6);
} END_TEST

// fmod

START_TEST(fmod_1) {
    ck_assert_double_nan(s21_fmod(s21_nan, 1.0));
    ck_assert_double_nan(fmod(s21_nan, 1.0));
} END_TEST

START_TEST(fmod_2) {
    ck_assert_double_nan(s21_fmod(34.98, s21_nan));
    ck_assert_double_nan(fmod(34.98, s21_nan));
} END_TEST

START_TEST(fmod_3) {
    ck_assert_double_nan(s21_fmod(NEG_INF, 3782.998));
    ck_assert_double_nan(fmod(NEG_INF, 3782.998));
} END_TEST

START_TEST(fmod_4) {
    ck_assert_double_nan(s21_fmod(POS_INF, 3782.998));
    ck_assert_double_nan(fmod(POS_INF, 3782.998));
} END_TEST

START_TEST(fmod_5) {
    ck_assert_double_nan(s21_fmod(3874.023, 0.0));
    ck_assert_double_nan(fmod(3874.023, 0.0));
} END_TEST

START_TEST(fmod_6) {
    ck_assert_double_eq_tol(fmod(-0.0, 92837.09), s21_fmod(-0.0, 92837.09), 1e-6);
} END_TEST

START_TEST(fmod_7) {
    ck_assert_double_eq_tol(fmod(-2763.9387, 76.09), s21_fmod(-2763.9387, 76.09), 1e-6);
} END_TEST

START_TEST(fmod_8) {
    ck_assert_double_eq_tol(fmod(2763.9387, -76.09), s21_fmod(2763.9387, -76.09), 1e-6);
} END_TEST

START_TEST(fmod_9) {
    ck_assert_double_eq_tol(fmod(6354.93842, 23.474), s21_fmod(6354.93842, 23.474), 1e-6);
} END_TEST

START_TEST(fmod_10) {
    ck_assert_double_eq_tol(fmod(27.0, 9.0), s21_fmod(27.0, 9.0), 1e-6);
} END_TEST

START_TEST(fmod_11) {
    ck_assert_double_eq_tol(fmod(0.0, 92837.09), s21_fmod(0.0, 92837.09), 1e-6);
} END_TEST

START_TEST(fmod_13) {
    ck_assert_double_eq_tol(fmod(549876.6758019836, 123.232), s21_fmod(549876.6758019836, 123.232), 1e-6);
} END_TEST

// ------------------- pow ------------------

START_TEST(pow_limit) {
    // 1e-22, 1e-9, -1e-9
    double value[10] = {POS_INF, NEG_INF, s21_nan, 1.0, -1.0, 0.0, 1e-6, -1e-6, 10.0, -10.0};
    double base, exp;
    long double res1, res2;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 8; j++) {
            base = value[i];
            exp = value[j];
            res1 = pow(base, exp);
            res2 = s21_pow(base, exp);

            if (__builtin_isnan(res1) || __builtin_isnan(res2)) {
                ck_assert_double_nan(res1);
                ck_assert_double_nan(res2);
            } else if (res1 == POS_INF || res2 == POS_INF || res1 == NEG_INF || res2 == NEG_INF) {
                ck_assert_double_eq(res1, res2);
            } else {
                ck_assert_double_eq_tol(pow(base, exp), s21_pow(base, exp), 1e-6);
                // ck_assert_uint_eq(res1, res2, 1e-6);
            }
        }
    }
} END_TEST

START_TEST(pow_small) {
    double base, exp;
    long double res1, res2;
    for (double i = -1; i <= 1; i+=1e-1) {
        for (double j = -1e2; j <= 1e2; j+=10) {
            base = j;
            exp = i;
            res1 = s21_pow(base, exp);
            res2 = pow(base, exp);
            if (__builtin_isnan(res1) || __builtin_isnan(res2)) {
                ck_assert_double_nan(res1);
                ck_assert_double_nan(res2);
            } else if (res1 == POS_INF || res2 == POS_INF || res1 == NEG_INF || res2 == NEG_INF) {
                ck_assert_double_eq(res1, res2);
            } else {
                ck_assert_double_eq_tol(res1, res2, 1e-06);
            }
        }
    }
    for (double i = -1; i <= 1; i+=1e-1) {
        for (double j = -1e1; j <= 1e1; j+=10) {
            base = i;
            exp = j;
            res1 = s21_pow(base, exp);
            res2 = pow(base, exp);
            ck_assert_double_eq_tol(res1, res2, 1e-06);
        }
    }
} END_TEST

START_TEST(pow_simple) {
    ck_assert_double_eq_tol(pow(29.99939, -9.001), s21_pow(29.99939, -9.001), 1e-6);
    ck_assert_double_eq_tol(pow(2.6, 3.45), s21_pow(2.6, 3.45), 1e-6);
    ck_assert_double_eq_tol(pow(3.0, 14.0), s21_pow(3.0, 14.0), 1e-6);
    ck_assert_double_eq_tol(pow(31.456, 4.3), s21_pow(31.456, 4.3), 1e-6);
    ck_assert_double_nan(pow(-1234, 5.67));
    ck_assert_double_nan(s21_pow(-1234, 5.67));
    ck_assert_double_nan(pow(-1234, -5.67));
    ck_assert_double_nan(s21_pow(-1234, -5.67));
    ck_assert_double_eq_tol(pow(15.534, 0.1), s21_pow(15.534, 0.1), 1e-6);
    ck_assert_double_eq_tol(pow(1.534, -0.99), s21_pow(1.534, -0.99), 1e-6);
    ck_assert_double_eq_tol(pow(1.534, 7.777777), s21_pow(1.534, 7.777777), 1e-6);
    ck_assert_double_eq_tol(pow(1.534, -7.777777), s21_pow(1.534, -7.777777), 1e-6);
    ck_assert_double_eq_tol(pow(1e-8, 1/3), s21_pow(1e-8, 1/3), 1e-6);
    ck_assert_double_eq_tol(pow(1e8, 1/4), s21_pow(1e-8, 1/4), 1e-6);
    ck_assert_double_eq_tol(pow(1e-8, 1/3), s21_pow(1e-8, 1/3), 1e-6);
    ck_assert_double_eq_tol(pow(1e8, 1/4), s21_pow(1e-8, 1/4), 1e-6);
    ck_assert_double_eq_tol(pow(999, 0.999), s21_pow(999, 0.999), 1e-6);
} END_TEST

START_TEST(pow_big) {
    double base, exp;
    long double res1, res2;
    for (double i = 1; i <= 1e3; i*=1.5) {
        base = i;
        exp = i/1000;
        res1 = s21_pow(base, exp);
        res2 = pow(base, exp);
        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST



// ------------------- log ------------------
START_TEST(log_limit) {
    double value[10] = {POS_INF, NEG_INF, s21_nan, 1.0, -1.0, 0.0, 1e-6, -1e-6, 10.0, -10.0};
    double x;
    long double res1, res2;
    for (int i = 0; i < 10; i++) {
        x = value[i];
        res1 = log(x);
        res2 = s21_log(x);

        if (__builtin_isnan(res1) || __builtin_isnan(res2)) {
            ck_assert_double_nan(res1);
            ck_assert_double_nan(res2);
        } else if (res1 == POS_INF || res2 == POS_INF || res1 == NEG_INF || res2 == NEG_INF) {
            ck_assert_double_eq(res1, res2);
        } else {
            ck_assert_double_eq_tol(res1, res2, 1e-6);
        }
    }
} END_TEST

START_TEST(log_big_sum) {
    long double res1, res2;
    for (double i = 99; i < 1e6; i+=i) {
        res1 = log(i);
        res2 = s21_log(i);

        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST

START_TEST(log_big_pr) {
    long double res1, res2;
    for (double i = 99; i < 1e6; i*=1.5) {
        res1 = log(i);
        res2 = s21_log(i);

        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST

START_TEST(log_small_raz) {
    long double res1, res2;
    for (double i = 1; i > 0; i-=1e-2) {
        res1 = log(i);
        res2 = s21_log(i);
        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST

START_TEST(log_small) {
    long double res1, res2;
    for (double i = 1; i > 0.0001; i-=1e-4) {
        res1 = log(i);
        res2 = s21_log(i);

        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST

START_TEST(log_simple_sum) {
    long double res1, res2;
    for (double i = -1.; i < 10; i+= 0.1) {
        res1 = log(i);
        res2 = s21_log(i);

        if (__builtin_isnan(res1) || __builtin_isnan(res2)) {
            ck_assert_double_nan(res1);
            ck_assert_double_nan(res2);
        } else {
            ck_assert_double_eq_tol(res1, res2, 1e-6);
        }
    }
} END_TEST

START_TEST(log_simple) {
    ck_assert_double_eq_tol(log(exp(1)), s21_log(exp(1)), 1e-6);
    ck_assert_double_eq_tol(log(s21_exp(1)), s21_log(exp(1)), 1e-6);
    ck_assert_double_eq_tol(log(12345), s21_log(12345), 1e-6);
    ck_assert_double_nan(log(-12345));
    ck_assert_double_nan(s21_log(-12345));
    ck_assert_double_eq_tol(log(15.534), s21_log(15.534), 1e-6);
    ck_assert_double_eq_tol(log(7.13), s21_log(7.13), 1e-6);
    ck_assert_double_eq_tol(log(777.7777), s21_log(777.7777), 1e-6);
    ck_assert_double_nan(log(-777.7777));
    ck_assert_double_nan(s21_log(-777.7777));
} END_TEST


// ------------------- exp ------------------
START_TEST(exp_limit) {
    // 1e-22, 1e-9, -1e-9
    double value[10] = {POS_INF, NEG_INF, s21_nan, 1.0, -1.0, 0.0, 1e-6, -1e-6, 10.0, -10.0};
    double x;
    long double res1, res2;
    for (int i = 0; i < 10; i++) {
        x = value[i];
        res1 = exp(x);
        res2 = s21_exp(x);

        if (__builtin_isnan(res1) || __builtin_isnan(res2)) {
            ck_assert_double_nan(res1);
            ck_assert_double_nan(res2);
        } else if (res1 == POS_INF || res2 == POS_INF || res1 == NEG_INF || res2 == NEG_INF) {
            ck_assert_double_eq(res1, res2);
        } else {
            ck_assert_double_eq_tol(res1, res2, 1e-6);
        }
    }
} END_TEST

START_TEST(exp_big_sum_plus) {
    long double res1, res2;
    for (double i = 0; i < 24; i+=1) {
        res1 = exp(i);
        res2 = s21_exp(i);
        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST

START_TEST(exp_big_pr_plus) {
    long double res1, res2;
    for (double i = 1; i < 24; i*=1.5) {
        res1 = exp(i);
        res2 = s21_exp(i);
        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST

START_TEST(exp_big_sum_minus) {
    long double res1, res2;
    for (double i =-99; i > -1e6; i+=i) {
        res1 = exp(i);
        res2 = s21_exp(i);
        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST

START_TEST(exp_big_pr_minus) {
    long double res1, res2;
    for (double i =-99; i > -1e6; i*=1.5) {
        res1 = exp(i);
        res2 = s21_exp(i);
        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST

START_TEST(exp_small) {
    long double res1;
    long double res2;
    for (double i = -1; i <= 1; i+=1e-3) {
        res1 = exp(i);
        res2 = s21_exp(i);
        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST

START_TEST(exp_simple) {
    ck_assert_double_eq_tol(exp(log(1)), s21_exp(log(1)), 1e-6);
    ck_assert_double_eq_tol(exp(s21_log(123)), s21_exp(s21_log(123)), 1e-6);
    ck_assert_double_eq_tol(exp(11), s21_exp(11), 1e-6);
    ck_assert_double_eq(exp(-12345), s21_exp(-12345));
    ck_assert_double_eq_tol(exp(15.534), s21_exp(15.534), 1e-6);
    ck_assert_double_eq_tol(exp(0.534), s21_exp(0.534), 1e-6);
    ck_assert_double_eq_tol(exp(-0.00009), s21_exp(-0.00009), 1e-6);
    ck_assert_double_eq_tol(exp(-7.13), s21_exp(-7.13), 1e-6);
    ck_assert_double_eq(exp(777.7777), s21_exp(777.7777));
    ck_assert_double_eq_tol(exp(-777.7777), s21_exp(-777.7777), 1e-6);
} END_TEST


// ------------------ sqrt ------------------
START_TEST(sqrt_limit) {
    double value[10] = {POS_INF, NEG_INF, s21_nan, 1.0, -1.0, 0.0, 1e-6, -1e-6, 10.0, -10.0};
    double x;
    long double res1, res2;
    for (int i = 0; i < 10; i++) {
        x = value[i];
        res1 = sqrt(x);
        res2 = s21_sqrt(x);

        if (__builtin_isnan(res1) || __builtin_isnan(res2)) {
            ck_assert_double_nan(res1);
            ck_assert_double_nan(res2);
        } else if (res1 == POS_INF || res2 == POS_INF || res1 == NEG_INF || res2 == NEG_INF) {
            ck_assert_double_eq(res1, res2);
        } else {
            ck_assert_double_eq_tol(res1, res2, 1e-6);
        }
    }
} END_TEST

START_TEST(sqrt_big_sum) {
    long double res1, res2;
    for (double i = 99; i < 1e6; i+=i) {
        res1 = sqrt(i);
        res2 = s21_sqrt(i);
        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST

START_TEST(sqrt_big_pr) {
    long double res1, res2;
    for (double i = 99; i < 1e6; i*=1.5) {
        res1 = sqrt(i);
        res2 = s21_sqrt(i);
        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST

START_TEST(sqrt_small) {
    long double res1;
    long double res2;
    for (double i = 0; i <= 1; i+=1e-3) {
        res1 = sqrt(i);
        res2 = s21_sqrt(i);
        ck_assert_double_eq_tol(res1, res2, 1e-6);
    }
} END_TEST

START_TEST(sqrt_simple) {
    ck_assert_double_eq_tol(sqrt(log(1)), s21_sqrt(log(1)), 1e-6);
    ck_assert_double_eq_tol(sqrt(s21_log(123)), s21_sqrt(s21_log(123)), 1e-6);
    ck_assert_double_eq_tol(sqrt(11), s21_sqrt(11), 1e-6);
    ck_assert_double_eq_tol(sqrt(12345), s21_sqrt(12345), 1e-6);
    ck_assert_double_eq_tol(sqrt(15.534), s21_sqrt(15.534), 1e-6);
    ck_assert_double_eq_tol(sqrt(0.534), s21_sqrt(0.534), 1e-6);
    ck_assert_double_eq_tol(sqrt(0.00009), s21_sqrt(0.00009), 1e-6);
    ck_assert_double_eq_tol(sqrt(7.13), s21_sqrt(7.13), 1e-6);
    ck_assert_double_eq_tol(sqrt(777.7777), s21_sqrt(777.7777), 1e-6);
    ck_assert_double_nan(sqrt(-777.7777));
    ck_assert_double_nan(s21_sqrt(-777.7777));
} END_TEST



// SIN
START_TEST(sin_1) {
  long double num = -36864579.672396;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_2) {
  long double num = 417009446.032815;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_3) {
  long double num = 677759473.527670;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_4) {
  long double num = -896528420.456000;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_5) {
  long double num = 46837396.010215;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_6) {
  long double num = -803885256.314597;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_7) {
  long double num = 1100497120.572486;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_8) {
  long double num = 55105461.764664;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_9) {
  long double num = -1842504121.289823;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_10) {
  long double num = 1033233481.940456;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_nan) {
  long double num = S21_NAN;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(sin_inf) {
    long double num = INFINITY;
    if (isnan((double)(s21_sin(num)))) {
      ck_assert_int_eq((isnan(sin(num)) != 0), 1);
    } else if (isinf((double)(s21_sin(num)))) {
      ck_assert_int_eq((isinf(sin(num)) != 0), 1);
    } else {
      long double condition = (s21_sin(num) - sin(num));
      ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
    }
} END_TEST

START_TEST(sin_neg_inf) {
  long double num = -INFINITY;
  if (isnan((double)(s21_sin(num)))) {
    ck_assert_int_eq((isnan(sin(num)) != 0), 1);
  } else if (isinf((double)(s21_sin(num)))) {
    ck_assert_int_eq((isinf(sin(num)) != 0), 1);
  } else {
    long double condition = (s21_sin(num) - sin(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// COS
START_TEST(cos_1) {
  long double num = -30071291.155215;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_2) {
  long double num = -1408190445.698886;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_3) {
  long double num = 543179138.816511;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_4) {
  long double num = 1211786089.097981;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_5) {
  long double num = -1511200530.226901;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_6) {
  long double num = 1252688476.467826;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_9) {
  long double num = -213223855.110455;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_10) {
  long double num = 346667158.578833;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_nan) {
  long double num = S21_NAN;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_inf) {
  long double num = INFINITY;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else if (isinf((double)(s21_cos(num)))) {
    ck_assert_int_eq((isinf(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(cos_neg_inf) {
  long double num = -INFINITY;
  if (isnan((double)(s21_cos(num)))) {
    ck_assert_int_eq((isnan(cos(num)) != 0), 1);
  } else if (isinf((double)(s21_cos(num)))) {
    ck_assert_int_eq((isinf(cos(num)) != 0), 1);
  } else {
    long double condition = (s21_cos(num) - cos(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

// TAN
START_TEST(tan_1) {
  long double num = 180765.325288;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_2) {
  long double num = -1877177.889402;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_3) {
  long double num = 10271212.826609;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_4) {
  long double num = -11726023.178420;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_5) {
  long double num = 728440.294381;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_6) {
  long double num = 2896027.668796;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_7) {
  long double num = -6462970.537349;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_8) {
  long double num = 16854178.773637;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_9) {
  long double num = -11817351.482724;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_10) {
  long double num = -14226370.134496;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_nan) {
  long double num = S21_NAN;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_inf) {
  long double num = INFINITY;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else if (isinf((double)(s21_tan(num)))) {
    ck_assert_int_eq((isinf(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST

START_TEST(tan_neg_inf) {
  long double num = -INFINITY;
  if (isnan((double)(s21_tan(num)))) {
    ck_assert_int_eq((isnan(tan(num)) != 0), 1);
  } else if (isinf((double)(s21_tan(num)))) {
    ck_assert_int_eq((isinf(tan(num)) != 0), 1);
  } else {
    long double condition = (s21_tan(num) - tan(num));
    ck_assert_int_eq(((condition <= DIFF) && (condition >= -DIFF)), 1);
  }
}
END_TEST


// asin, acos, atan
START_TEST(s21_atan_check_nan) {
    ck_assert_ldouble_nan(s21_atan(NAN));
    ck_assert_ldouble_nan(atan(NAN));
}
END_TEST

START_TEST(s21_atan_check_inf) {
    // ck_assert_ldouble_eq_tol(s21_atan(INFINITY), M_PI / 2, eps);
    // ck_assert_ldouble_eq_tol(atan(INFINITY), M_PI / 2, eps);
    // ck_assert_ldouble_eq_tol(s21_atan(-INFINITY), -M_PI / 2, eps);
    // ck_assert_ldouble_eq_tol(atan(-INFINITY), -M_PI / 2, eps);

    ck_assert_ldouble_eq_tol(s21_atan(INFINITY), s21_pi / 2, eps);
    ck_assert_ldouble_eq_tol(atan(INFINITY), s21_pi / 2, eps);
    ck_assert_ldouble_eq_tol(s21_atan(-INFINITY), -s21_pi / 2, eps);
    ck_assert_ldouble_eq_tol(atan(-INFINITY), -s21_pi / 2, eps);
}
END_TEST

START_TEST(s21_atan_check_1) {
    ck_assert_ldouble_eq_tol(s21_atan(0.0), atan(0.0), eps);
    ck_assert_ldouble_eq_tol(s21_atan(50), atan(50), eps);
    ck_assert_ldouble_eq_tol(s21_atan(0.000004), atan(0.000004), eps);
    ck_assert_ldouble_eq_tol(s21_atan(10.099), atan(10.099), eps);
    ck_assert_ldouble_eq_tol(s21_atan(0.6), atan(0.6), eps);
    ck_assert_ldouble_eq_tol(s21_atan(0.5), atan(0.5), eps);
    ck_assert_ldouble_eq_tol(s21_atan(0.4), atan(0.4), eps);
    ck_assert_ldouble_eq_tol(s21_atan(0.3), atan(0.3), eps);
    ck_assert_ldouble_eq_tol(s21_atan(0.2), atan(0.2), eps);
    ck_assert_ldouble_eq_tol(s21_atan(0.1), atan(0.1), eps);
    ck_assert_ldouble_eq_tol(s21_atan(0.7), atan(0.7), eps);
    ck_assert_ldouble_eq_tol(s21_atan(0.8), atan(0.8), eps);
    ck_assert_ldouble_eq_tol(s21_atan(0.6), atan(0.6), eps);
    ck_assert_ldouble_eq_tol(s21_atan(-0.5), atan(-0.5), eps);
    ck_assert_ldouble_eq_tol(s21_atan(-0.4), atan(-0.4), eps);
    ck_assert_ldouble_eq_tol(s21_atan(-0.3), atan(-0.3), eps);
    ck_assert_ldouble_eq_tol(s21_atan(0.20000006), atan(0.20000006), eps);
    ck_assert_ldouble_eq_tol(s21_atan(-0.1), atan(-0.1), eps);
    ck_assert_ldouble_eq_tol(s21_atan(-0.7), atan(-0.7), eps);
    ck_assert_ldouble_eq_tol(s21_atan(-0.8), atan(-0.8), eps);
    ck_assert_ldouble_eq_tol(s21_atan(-0.2), atan(-0.2), eps);
    ck_assert_ldouble_eq_tol(s21_atan(-0.465711), atan(-0.465711), eps);
    ck_assert_ldouble_eq_tol(s21_atan(1.0), atan(1.0), eps);
    ck_assert_ldouble_eq_tol(s21_atan(2.0), atan(2.0), eps);
    ck_assert_ldouble_eq_tol(s21_atan(-0.0), atan(-0.0), eps);
    ck_assert_ldouble_eq_tol(s21_atan(-1.0), atan(-1.0), eps);
    ck_assert_ldouble_eq_tol(s21_atan(-2.0), atan(-2.0), eps);
}
END_TEST

START_TEST(s21_asin_check_nan) {
    ck_assert_ldouble_nan(s21_asin(NAN));
    ck_assert_ldouble_nan(asin(NAN));
}
END_TEST

START_TEST(s21_asin_check_inf) {
    ck_assert_ldouble_nan(s21_asin(INFINITY));
    ck_assert_ldouble_nan(asin(INFINITY));
    ck_assert_ldouble_nan(s21_asin(-INFINITY));
    ck_assert_ldouble_nan(asin(-INFINITY));
}
END_TEST

START_TEST(s21_asin_check_1) {
    ck_assert_ldouble_eq_tol(s21_asin(0.6), asin(0.6), eps);
    ck_assert_ldouble_eq_tol(s21_asin(0.5), asin(0.5), eps);
    ck_assert_ldouble_eq_tol(s21_asin(0.4), asin(0.4), eps);
    ck_assert_ldouble_eq_tol(s21_asin(0.3), asin(0.3), eps);
    ck_assert_ldouble_eq_tol(s21_asin(0.2), asin(0.2), eps);
    ck_assert_ldouble_eq_tol(s21_asin(0.1), asin(0.1), eps);
    ck_assert_ldouble_eq_tol(s21_asin(0.7), asin(0.7), eps);
    ck_assert_ldouble_eq_tol(s21_asin(0.8), asin(0.8), eps);
    ck_assert_ldouble_eq_tol(s21_asin(0.6), asin(0.6), eps);
    ck_assert_ldouble_eq_tol(s21_asin(-0.5), asin(-0.5), eps);
    ck_assert_ldouble_eq_tol(s21_asin(-0.4), asin(-0.4), eps);
    ck_assert_ldouble_eq_tol(s21_asin(-0.3), asin(-0.3), eps);
    ck_assert_ldouble_eq_tol(s21_asin(0.20000006), asin(0.20000006), eps);
    ck_assert_ldouble_eq_tol(s21_asin(-0.1), asin(-0.1), eps);
    ck_assert_ldouble_eq_tol(s21_asin(-0.7), asin(-0.7), eps);
    ck_assert_ldouble_eq_tol(s21_asin(-0.8), asin(-0.8), eps);
    ck_assert_ldouble_eq_tol(s21_asin(-0.2), asin(-0.2), eps);
    ck_assert_ldouble_eq_tol(s21_asin(-0.465711), asin(-0.465711), eps);
    ck_assert_ldouble_eq_tol(s21_asin(0.0), asin(0.0), eps);
    ck_assert_ldouble_eq_tol(s21_asin(1.0), asin(1.0), eps);
    ck_assert_ldouble_nan(s21_asin(2.0));
    ck_assert_ldouble_nan(asin(2.0));
    ck_assert_ldouble_eq_tol(s21_asin(-0.0), asin(-0.0), eps);
    ck_assert_ldouble_eq_tol(s21_asin(-1.0), asin(-1.0), eps);
    ck_assert_ldouble_nan(s21_asin(-2.0));
    ck_assert_ldouble_nan(asin(-2.0));
}
END_TEST

START_TEST(s21_acos_check_nan) {
    ck_assert_ldouble_nan(s21_acos(NAN));
    ck_assert_ldouble_nan(acos(NAN));
}
END_TEST

START_TEST(s21_acos_check_inf) {
    ck_assert_ldouble_nan(s21_acos(INFINITY));
    ck_assert_ldouble_nan(acos(INFINITY));
    ck_assert_ldouble_nan(s21_acos(-INFINITY));
    ck_assert_ldouble_nan(acos(-INFINITY));
}
END_TEST

START_TEST(s21_acos_check_1) {
    ck_assert_ldouble_eq_tol(s21_acos(0.6), acos(0.6), eps);
    ck_assert_ldouble_eq_tol(s21_acos(0.5), acos(0.5), eps);
    ck_assert_ldouble_eq_tol(s21_acos(0.4), acos(0.4), eps);
    ck_assert_ldouble_eq_tol(s21_acos(0.3), acos(0.3), eps);
    ck_assert_ldouble_eq_tol(s21_acos(0.2), acos(0.2), eps);
    ck_assert_ldouble_eq_tol(s21_acos(0.1), acos(0.1), eps);
    ck_assert_ldouble_eq_tol(s21_acos(0.7), acos(0.7), eps);
    ck_assert_ldouble_eq_tol(s21_acos(0.8), acos(0.8), eps);
    ck_assert_ldouble_eq_tol(s21_acos(0.6), acos(0.6), eps);
    ck_assert_ldouble_eq_tol(s21_acos(-0.5), acos(-0.5), eps);
    ck_assert_ldouble_eq_tol(s21_acos(-0.4), acos(-0.4), eps);
    ck_assert_ldouble_eq_tol(s21_acos(-0.3), acos(-0.3), eps);
    ck_assert_ldouble_eq_tol(s21_acos(0.20000006), acos(0.20000006), eps);
    ck_assert_ldouble_eq_tol(s21_acos(-0.1), acos(-0.1), eps);
    ck_assert_ldouble_eq_tol(s21_acos(-0.7), acos(-0.7), eps);
    ck_assert_ldouble_eq_tol(s21_acos(-0.8), acos(-0.8), eps);
    ck_assert_ldouble_eq_tol(s21_acos(-0.2), acos(-0.2), eps);
    ck_assert_ldouble_eq_tol(s21_acos(-0.465711), acos(-0.465711), eps);
    ck_assert_ldouble_eq_tol(s21_acos(0.0), acos(0.0), eps);
    ck_assert_ldouble_eq_tol(s21_acos(1.0), acos(1.0), eps);
    ck_assert_ldouble_nan(s21_acos(2.0));
    ck_assert_ldouble_nan(acos(2.0));
    ck_assert_ldouble_eq_tol(s21_acos(-0.0), acos(-0.0), eps);
    ck_assert_ldouble_eq_tol(s21_acos(-1.0), acos(-1.0), eps);
    ck_assert_ldouble_nan(s21_acos(2.0));
    ck_assert_ldouble_nan(acos(2.0));
}
END_TEST











Suite *s21_math(void) {
    Suite *s;
    TCase *tc_core, *tc_pow, *tc1_1;

    s = suite_create("s21_math");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, abs_1);
    tcase_add_test(tc_core, abs_2);
    tcase_add_test(tc_core, abs_3);
    tcase_add_test(tc_core, abs_4);
    tcase_add_test(tc_core, abs_5);

    tcase_add_test(tc_core, fabs_1);
    tcase_add_test(tc_core, fabs_2);
    tcase_add_test(tc_core, fabs_3);
    tcase_add_test(tc_core, fabs_4);
    tcase_add_test(tc_core, fabs_5);
    tcase_add_test(tc_core, fabs_6);
    tcase_add_test(tc_core, fabs_7);
    tcase_add_test(tc_core, fabs_8);
    tcase_add_test(tc_core, fabs_9);
    tcase_add_test(tc_core, fabs_10);
    tcase_add_test(tc_core, fabs_11);

    tcase_add_test(tc_core, ceil_1);
    tcase_add_test(tc_core, ceil_2);
    tcase_add_test(tc_core, ceil_3);
    tcase_add_test(tc_core, ceil_4);
    tcase_add_test(tc_core, ceil_5);
    tcase_add_test(tc_core, ceil_6);
    tcase_add_test(tc_core, ceil_7);
    tcase_add_test(tc_core, ceil_8);
    tcase_add_test(tc_core, ceil_9);
    tcase_add_test(tc_core, ceil_10);
    tcase_add_test(tc_core, ceil_11);

    tcase_add_test(tc_core, floor_1);
    tcase_add_test(tc_core, floor_2);
    tcase_add_test(tc_core, floor_3);
    tcase_add_test(tc_core, floor_4);
    tcase_add_test(tc_core, floor_5);
    tcase_add_test(tc_core, floor_6);
    tcase_add_test(tc_core, floor_7);
    tcase_add_test(tc_core, floor_8);
    tcase_add_test(tc_core, floor_9);
    tcase_add_test(tc_core, floor_10);
    tcase_add_test(tc_core, floor_11);

    tcase_add_test(tc_core, fmod_1);
    tcase_add_test(tc_core, fmod_2);
    tcase_add_test(tc_core, fmod_3);
    tcase_add_test(tc_core, fmod_4);
    tcase_add_test(tc_core, fmod_5);
    tcase_add_test(tc_core, fmod_6);
    tcase_add_test(tc_core, fmod_7);
    tcase_add_test(tc_core, fmod_8);
    tcase_add_test(tc_core, fmod_9);
    tcase_add_test(tc_core, fmod_10);
    tcase_add_test(tc_core, fmod_11);
    tcase_add_test(tc_core, fmod_13);


    tc_pow = tcase_create("pow_case");
    // ------------------- pow ------------------
    tcase_add_test(tc_pow, pow_limit);
    tcase_add_test(tc_pow, pow_small);
    tcase_add_test(tc_pow, pow_simple);
    tcase_add_test(tc_pow, pow_big);


    // ------------------- log ------------------
    tcase_add_test(tc_pow, log_limit);
    tcase_add_test(tc_pow, log_big_sum);
    tcase_add_test(tc_pow, log_big_pr);
    tcase_add_test(tc_pow, log_small_raz);
    tcase_add_test(tc_pow, log_small);
    tcase_add_test(tc_pow, log_simple_sum);
    tcase_add_test(tc_pow, log_simple);


    // ------------------- exp ------------------
    tcase_add_test(tc_pow, exp_limit);
    tcase_add_test(tc_pow, exp_big_sum_plus);
    tcase_add_test(tc_pow, exp_big_pr_plus);
    tcase_add_test(tc_pow, exp_big_sum_minus);
    tcase_add_test(tc_pow, exp_big_pr_minus);
    tcase_add_test(tc_pow, exp_small);
    tcase_add_test(tc_pow, exp_simple);


    // ------------------ sqrt ------------------
    tcase_add_test(tc_pow, sqrt_limit);
    tcase_add_test(tc_pow, sqrt_limit);
    tcase_add_test(tc_pow, sqrt_big_sum);
    tcase_add_test(tc_pow, sqrt_big_pr);
    tcase_add_test(tc_pow, sqrt_small);
    tcase_add_test(tc_pow, sqrt_simple);


    tc1_1 = tcase_create("Core");
    // SIN
    tcase_add_test(tc1_1, sin_1);
    tcase_add_test(tc1_1, sin_2);
    tcase_add_test(tc1_1, sin_3);
    tcase_add_test(tc1_1, sin_4);
    tcase_add_test(tc1_1, sin_5);
    tcase_add_test(tc1_1, sin_6);
    tcase_add_test(tc1_1, sin_7);
    tcase_add_test(tc1_1, sin_8);
    tcase_add_test(tc1_1, sin_9);
    tcase_add_test(tc1_1, sin_10);
    tcase_add_test(tc1_1, sin_nan);
    tcase_add_test(tc1_1, sin_inf);
    tcase_add_test(tc1_1, sin_neg_inf);
    // COS
    tcase_add_test(tc1_1, cos_1);
    tcase_add_test(tc1_1, cos_2);
    tcase_add_test(tc1_1, cos_3);
    tcase_add_test(tc1_1, cos_4);
    tcase_add_test(tc1_1, cos_5);
    tcase_add_test(tc1_1, cos_6);
    tcase_add_test(tc1_1, cos_9);
    tcase_add_test(tc1_1, cos_10);
    tcase_add_test(tc1_1, cos_nan);
    tcase_add_test(tc1_1, cos_inf);
    tcase_add_test(tc1_1, cos_neg_inf);
    // TAN
    tcase_add_test(tc1_1, tan_1);
    tcase_add_test(tc1_1, tan_2);
    tcase_add_test(tc1_1, tan_3);
    tcase_add_test(tc1_1, tan_4);
    tcase_add_test(tc1_1, tan_5);
    tcase_add_test(tc1_1, tan_6);
    tcase_add_test(tc1_1, tan_7);
    tcase_add_test(tc1_1, tan_8);
    tcase_add_test(tc1_1, tan_9);
    tcase_add_test(tc1_1, tan_10);
    tcase_add_test(tc1_1, tan_nan);
    tcase_add_test(tc1_1, tan_inf);
    tcase_add_test(tc1_1, tan_neg_inf);

    // asin, acos, atan
    tcase_add_test(tc_core, s21_atan_check_nan);
    tcase_add_test(tc_core, s21_atan_check_inf);
    tcase_add_test(tc_core, s21_atan_check_1);
    tcase_add_test(tc_core, s21_asin_check_nan);
    tcase_add_test(tc_core, s21_asin_check_inf);
    tcase_add_test(tc_core, s21_asin_check_1);
    tcase_add_test(tc_core, s21_acos_check_nan);
    tcase_add_test(tc_core, s21_acos_check_inf);
    tcase_add_test(tc_core, s21_acos_check_1);

    suite_add_tcase(s, tc_core);
    suite_add_tcase(s, tc_pow);
    suite_add_tcase(s, tc1_1);

    return s;
}

int main(void) {
    int no_failed;
    Suite *s;
    SRunner *sr;

    s = s21_math();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    no_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
