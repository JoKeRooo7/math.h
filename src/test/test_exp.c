#include "test.h"

START_TEST(test_exp_1) {
  for (double k = 2 * S21_M_PI; k > -2 * S21_M_PI; k -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_exp(k), exp(k), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_exp_2) {
  double n = -1;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_3) {
  double n = -0.9999;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_4) {
  double n = 0.9999;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_5) {
  double n = 0;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_6) {
  double n = 1;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_7) {
  double n = INFINITY;
  ck_assert_double_infinite(s21_ceil(n));
}
END_TEST

START_TEST(test_exp_8) {
  double n = -INFINITY;
  ck_assert_double_infinite(s21_ceil(n));
}
END_TEST

START_TEST(test_exp_9) {
  double n = NAN;
  ck_assert_double_nan(s21_exp(n));
}
END_TEST

START_TEST(test_exp_10) {
  double n = -NAN;
  ck_assert_double_nan(s21_exp(n));
}
END_TEST

START_TEST(test_exp_11) {
  double n = 0.0;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_12) {
  for (double i = -100; i >= -900; i -= 2.4) {
    ck_assert_ldouble_eq_tol(s21_exp(i), exp(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_exp_13) {
  double n = 2 * (-M_PI);
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_14) {
  double n = 8 * (-M_PI);
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_15) {
  double n = -0.123456789;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_16) {
  double n = 0.123456789;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_17) {
  double n = 21.123456;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_18) {
  double n = -123456.123456;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_19) {
  double n = -0.0;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_20) {
  double n = 21.21;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_exp_21) {
  double n = -21.21;
  ck_assert_ldouble_eq_tol(s21_exp(n), exp(n), S21_M_EPS);
}
END_TEST

Suite *test_s21_exp_suite(void) {
  Suite *s = suite_create("s21_exp");
  TCase *o = tcase_create("originl_exp");

  tcase_add_test(o, test_exp_1);
  tcase_add_test(o, test_exp_2);
  tcase_add_test(o, test_exp_3);
  tcase_add_test(o, test_exp_4);
  tcase_add_test(o, test_exp_5);
  tcase_add_test(o, test_exp_6);
  tcase_add_test(o, test_exp_7);
  tcase_add_test(o, test_exp_8);
  tcase_add_test(o, test_exp_9);
  tcase_add_test(o, test_exp_10);
  tcase_add_test(o, test_exp_11);
  tcase_add_test(o, test_exp_12);
  tcase_add_test(o, test_exp_13);
  tcase_add_test(o, test_exp_14);
  tcase_add_test(o, test_exp_15);
  tcase_add_test(o, test_exp_16);
  tcase_add_test(o, test_exp_17);
  tcase_add_test(o, test_exp_18);
  tcase_add_test(o, test_exp_19);
  tcase_add_test(o, test_exp_20);
  tcase_add_test(o, test_exp_21);

  suite_add_tcase(s, o);
  return s;
}