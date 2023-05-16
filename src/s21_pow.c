#include "s21_math.h"

long double s21_pow(double base, double exp) {
    long double res = 0.0;
    if (base == 1.0 || exp == 1.0) {
        res = base;
    } else if (s21_fabs(exp) < eps_zero) {
        res = 1.0;
    } else if (__builtin_isnan(exp) || (__builtin_isnan(base))) {
        res = s21_nan;
    } else if (s21_fabs(base) < eps_zero) {
        if (exp > 0) {
            res = 0.0;
        } else {
            res = POS_INF;
        }
    } else if (exp == POS_INF) {
        if (s21_fabs(base) < 1) {
            res = 0.0;
        } else if (base == -1.0) {
            res = 1.0;
        } else {
            res = POS_INF;
        }
    } else if (exp == NEG_INF) {
        if (s21_fabs(base) < 1) {
            res = POS_INF;
        } else if (base == -1.0) {
            res = 1.0;
        } else {
            res = 0.0;
        }
    } else if (base == POS_INF) {
        if (exp < 0) {
            res = 0.0;
        } else {
            res = POS_INF;
        }
    } else if (base == NEG_INF) {
        if (exp < 0) {
            res = 0.0;
        } else if (exp == POS_INF) {
            res = POS_INF;
        } else if (s21_fmod(exp, 2) == 1) {
            res = NEG_INF;
        } else {
            res = POS_INF;
        }
    } else {
        if (s21_fmod(s21_fabs(exp), 1) < eps_zero) {
            res = base;
            for (double i = 1; i < s21_fabs(exp); i++) {
                res *= base;
            }
            res = exp > 0 ? res : 1.0 / res;
        } else {
            if (base > 0) {
                res = s21_exp(exp * s21_log(base));
            } else if (s21_fmod(1 / exp, 2) == 1) {
                res = s21_exp(exp * s21_log(base));
            } else {
                res = s21_nan;
            }
        }
    }
    return res;
}
