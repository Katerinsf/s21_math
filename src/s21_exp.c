#include "s21_math.h"

long double s21_exp(double x) {
    long double res = 0.0;
    long double term = 1.0;
    long long int n = 0;

    if (x == POS_INF) {
        res = POS_INF;
    } else if (x == NEG_INF) {
        res = 0.0;
    } else if (__builtin_isnan(x)) {
        res = s21_nan;
    } else {
        while (term > f_eps && res < DBL_MAX) {
            res += term;
            n++;
            term *= s21_fabs(x);
            term /= n;
        }
        if (x < 0) {
            if (res > DBL_MAX) {
                res = 0.0;
            } else {
                res = 1 / res;
            }
        } else if (res > DBL_MAX) {
            res = POS_INF;
        }
    }
    return res;
}
