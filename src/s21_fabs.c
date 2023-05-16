#include "s21_math.h"

long double s21_fabs(double x) {
    long double k;
    k = x;
    if (x < 0 && x > NEG_INF) {
        k = -x;
    } else if (x == NEG_INF || x == POS_INF) {
        k = POS_INF;
    }
    return k;
}
