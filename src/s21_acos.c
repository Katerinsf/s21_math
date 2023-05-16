#include "s21_math.h"

long double s21_acos(double x) {
    long double result = s21_nan;
    if (x >= -1.0 && x < 0.0) {
        result = s21_pi - s21_asin(s21_sqrt(1.0 - x * x));
    } else if (x >= 0.0 && x <= 1.0) {
        result = s21_asin(s21_sqrt(1.0 - x * x));
    }
    return result;
}
