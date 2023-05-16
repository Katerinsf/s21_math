#include "s21_math.h"

long double s21_atan(double x) {
    long double result = 0;
    if (__builtin_isnan(x) == 1) {
        result = s21_nan;
    }
    if (__builtin_isinf(x) == 1) {
        if (x == POS_INF) {
            result = s21_pi / 2;
        } else {
            result = -s21_pi / 2;
        }
    }
    if ((x <= 1.0 && x + eps > 1.0) || (x >= -1.0 && x < -1.0 + eps)) {
        if (x <= 1.0 && x + eps > 1.0) {
            result = s21_pi / 4;
        } else {
            result = -0.7853981633974480L;
        }
    }
    if (result == 0) {
        if (x > -1. && x < 1.) {
            for (int i = 0; i < 2000; i++) {
                result+= s21_pow(-1, i) * s21_pow(x, 1 + (2 * i)) / (1+ 2 * i);
            }
        } else {
            for (int i = 0; i < 2000; i++) {
                result += s21_pow(-1, i) * s21_pow(x, -(1 + 2 * i)) / (1 + 2 * i);
            }
            result = s21_pi * s21_sqrt(x * x) / (2 * x) - result;
        }
    }
    return result;
}
