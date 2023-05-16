#include "s21_math.h"

long double s21_log(double x) {
    long double res = 0.0;
    long double z = 0.0;
    long double term_x = 0.0;
    long double term = 0.0;
    int n = 0;

    if (x < 0 || __builtin_isnan(x)) {
        res = s21_nan;
    } else if (s21_fabs(x) < eps) {
        res = NEG_INF;
    } else if (x == POS_INF) {
        res = POS_INF;
    } else {
        z = (x - 1) / (x + 1);
        term_x = z;
        term = term_x / (2*n + 1);
        while (s21_fabs((double) term_x) > f_eps) {
            res += term;
            term_x *= z * z;
            n++;
            term = term_x / (2*n + 1);
        }
        res *= 2;
    }
    return res;
}
