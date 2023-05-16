#include "s21_math.h"

long double s21_asin(double x) {
    long double result = s21_nan;
    if (x > -1.0 && x < 1.0) {
        result = s21_atan(x / s21_sqrt(1.0 - x * x));
    } else if (x == 1.0) {
        result = s21_pi / 2;
    } else if (x == -1.0) {
        result = -s21_pi / 2;
    }
    return result;
}
