#include "s21_math.h"

long double s21_sqrt(double x) {
    long double res;
    if (x == NEG_INF) {
        res = s21_nan;
    } else {
        res = s21_pow(x, 0.5);
    }
    return res;
}
