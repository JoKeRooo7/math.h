#ifndef SRC_S21_MATH_TEST_H_
#define SRC_S21_MATH_TEST_H_

#define S21_M_T_EPS 1e-6

#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../s21_math.h"

Suite *test_s21_abs_suite();
Suite *test_s21_cos_suite();
Suite *test_s21_fmod_suite();
Suite *test_s21_acos_suite();
Suite *test_s21_asin_suite();
Suite *test_s21_ceil_suite();
Suite *test_s21_exp_suite();
Suite *test_s21_log_suite();
Suite *test_s21_floor_suite();
Suite *test_s21_fabs_suite();
Suite *test_s21_sin_suite();
Suite *test_s21_tan_suite();
Suite *test_s21_sqrt_suite();
Suite *test_s21_atan_suite();
Suite *test_s21_pow_suite();

#endif  //  SRC_S21_MATH_TEST_H_
