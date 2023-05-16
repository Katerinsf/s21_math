#include "s21_math.h"

int s21_abs(int x) {
    int k = x;
    if (x < 0 && x != -2147483648) {
        k = -x;
    }
    return k;
}
