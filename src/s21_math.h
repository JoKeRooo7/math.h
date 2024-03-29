#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#define S21_M_EPS 1e-6
#define S21_M_PI 3.1415926535897932384626433832795
#define S21_M_INF 1.0 / 0.0
#define S21_M_NAN 0.0 / 0.0

int s21_abs(int x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_ceil(double x);
long double s21_fmod(double x, double y);
long double s21_cos(double x);
long double s21_sin(double x);
long double s21_log(double x);
long double s21_exp(double x);
long double s21_sqrt(double x);
long double s21_pow(double base, double exp);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_tan(double x);

#endif  //  SRC_S21_MATH_H_