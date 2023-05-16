#include "s21_math.h"

long double s21_ceil(double x) {
    double k;
    long int l = (long int)x;
    if ((x < 0 && x > NEG_INF) || (x > 0 && x < POS_INF && \
    s21_fmod(x, l) <= eps && s21_fmod(x, l) >= -eps)) {
        k = (long int)x;
    } else if (x > 0 && x < POS_INF) {
        k = (long int)x + 1;
    } else if ((x <= eps && x >= -eps) || x == NEG_INF || x == POS_INF || __builtin_isnan(x) == 1) {
        k = x;
    }
    return k;
}
