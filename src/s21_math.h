#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdio.h>
#include <float.h>

#define s21_NULL (void*)0
#define eps 1e-9
#define f_eps 1e-18  // 1e-15
#define eps_zero 1e-21

#define POS_INF 1.0/0.0
#define NEG_INF -1.0/0.0
#define s21_nan 0.0/0.0
#define s21_pi 3.14159265358979323846

#define S21_NAN (__builtin_nanf(""))
#define S21_INF (__builtin_inff())

int s21_abs(int x);
long double s21_ceil(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_pow(double base, double exp);
long double s21_sqrt(double x);
long double s21_exp(double x);
long double s21_log(double x);
long double s21_tan(double x);
long double s21_sin(double x);
long double s21_cos(double x);
long double s21_atan(double x);
long double s21_asin(double x);
long double s21_acos(double x);

#endif  // SRC_S21_MATH_H_
