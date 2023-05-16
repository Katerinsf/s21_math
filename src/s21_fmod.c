#include "s21_math.h"

long double s21_fmod(double x, double y) {
    double k;
    if (__builtin_isnan(x) == 1 || __builtin_isnan(y) == 1 || x == POS_INF || x == NEG_INF \
    || (y <= eps && y >= -eps)) {
        k = s21_nan;
    } else if (x <= eps && x>= -eps) {
        k = x;
    } else {
        k = (x - (long int)(x/y)*y);
    }
    return k;
}
