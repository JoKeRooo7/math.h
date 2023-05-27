#include "test.h"

START_TEST(test_asin_1) {
  for (double i = 0.99; i >= -0.99; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_asin(i), asin(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_asin_2) {
  double n = -M_PI;
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_asin_3) {
  double n = -0.9999;
  ck_assert_ldouble_eq_tol(s21_asin(n), asin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_asin_4) {
  double n = 0.9999;
  ck_assert_ldouble_eq_tol(s21_asin(n), asin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_asin_5) {
  double n = 0;
  ck_assert_ldouble_eq_tol(s21_asin(n), asin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_asin_6) {
  double n = M_PI;
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_asin_7) {
  double n = INFINITY;
  ck_assert_double_nan(s21_asin(n));
}
END_TEST

START_TEST(test_asin_8) {
  double n = -INFINITY;
  ck_assert_double_nan(s21_asin(n));
}
END_TEST

START_TEST(test_asin_9) {
  double n = NAN;
  ck_assert_double_nan(s21_asin(n));
}
END_TEST

START_TEST(test_asin_10) {
  double n = -NAN;
  ck_assert_double_nan(s21_asin(n));
}
END_TEST

START_TEST(test_asin_11) {
  double n = 0.0;
  ck_assert_ldouble_eq_tol(s21_asin(n), asin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_asin_12) {
  for (double i = -0.100; i >= -0.900; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_asin(i), asin(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_asin_13) {
  double n = 2 * (-M_PI);
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_asin_14) {
  double n = 0.000001;
  ck_assert_ldouble_eq_tol(s21_asin(n), asin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_asin_15) {
  double n = 1 / 8 * M_PI;
  ck_assert_ldouble_eq_tol(s21_asin(n), asin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_asin_16) {
  double n = M_PI / 4;
  ck_assert_ldouble_eq_tol(s21_asin(n), asin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_asin_17) {
  double n = 0.123456;
  ck_assert_ldouble_eq_tol(s21_asin(n), asin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_asin_18) {
  double n = -0.123456;
  ck_assert_ldouble_eq_tol(s21_asin(n), asin(n), S21_M_T_EPS);
}
END_TEST

Suite *test_s21_asin_suite(void) {
  Suite *s = suite_create("s21_asin");
  TCase *o = tcase_create("originl_asin");

  tcase_add_test(o, test_asin_1);
  tcase_add_test(o, test_asin_2);
  tcase_add_test(o, test_asin_3);
  tcase_add_test(o, test_asin_4);
  tcase_add_test(o, test_asin_5);
  tcase_add_test(o, test_asin_6);
  tcase_add_test(o, test_asin_7);
  tcase_add_test(o, test_asin_8);
  tcase_add_test(o, test_asin_9);
  tcase_add_test(o, test_asin_10);
  tcase_add_test(o, test_asin_11);
  tcase_add_test(o, test_asin_12);
  tcase_add_test(o, test_asin_13);
  tcase_add_test(o, test_asin_14);
  tcase_add_test(o, test_asin_15);
  tcase_add_test(o, test_asin_16);
  tcase_add_test(o, test_asin_17);
  tcase_add_test(o, test_asin_18);

  suite_add_tcase(s, o);
  return s;
}