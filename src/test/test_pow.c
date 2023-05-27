#include "test.h"

START_TEST(test_pow_1) {
  double x = 1;
  double y = 2;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), S21_M_T_EPS);
}
END_TEST

START_TEST(test_pow_2) {
  double x = -21.21;
  double y = 21.21;
  ck_assert_double_nan(s21_pow(x, y));
}
END_TEST

START_TEST(test_pow_3) {
  double x = -2.789;
  double y = 1.0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), S21_M_T_EPS);
}
END_TEST

START_TEST(test_pow_4) {
  double x = 3.21;
  double y = 0.0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), S21_M_T_EPS);
}
END_TEST

START_TEST(test_pow_5) {
  double x = 0.0;
  double y = 8.36;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), S21_M_T_EPS);
}
END_TEST

START_TEST(test_pow_6) {
  double x = -123456789.123456799;
  double y = 2.2121;
  ck_assert_double_nan(s21_pow(x, y));
}
END_TEST

START_TEST(test_pow_7) {
  double x = -M_PI;
  double y = 0.21;
  ck_assert_double_nan(s21_pow(x, y));
}
END_TEST

START_TEST(test_pow_8) {
  double x = 4;
  double y = 0.21;
  ck_assert_ldouble_eq_tol(s21_pow(y, x), pow(y, x), S21_M_T_EPS);
}
END_TEST

START_TEST(test_pow_9) {
  double x = INFINITY;
  double y = 0.21;
  ck_assert_double_infinite(s21_pow(x, y));
}
END_TEST

START_TEST(test_pow_10) {
  double x = NAN;
  double y = 0.21;
  ck_assert_double_nan(s21_pow(x, y));
}
END_TEST

START_TEST(test_pow_11) {
  double x = -NAN;
  double y = 2.1;
  ck_assert_double_nan(s21_pow(x, y));
}
END_TEST

START_TEST(test_pow_12) {
  double x = -INFINITY;
  double y = 0.21;
  ck_assert_double_infinite(s21_pow(x, y));
}
END_TEST

START_TEST(test_pow_13) {
  double x = INFINITY;
  double y = 0.21;
  ck_assert_double_infinite(s21_pow(x, y));
}
END_TEST

START_TEST(test_pow_14) {
  double x = 4;
  double y = 0.5;
  ck_assert_ldouble_eq_tol(s21_pow(y, x), pow(y, x), S21_M_T_EPS);
}
END_TEST

START_TEST(test_pow_15) {
  double x = INFINITY;
  double y = INFINITY;
  ck_assert_double_infinite(s21_pow(x, y));
}
END_TEST

START_TEST(test_pow_16) {
  double x = -INFINITY;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(y, x), pow(y, x), S21_M_T_EPS);
}
END_TEST

START_TEST(test_pow_17) {
  double x = 21;
  double y = 2;
  ck_assert_ldouble_eq_tol(s21_pow(y, x), pow(y, x), S21_M_T_EPS);
}
END_TEST

START_TEST(test_pow_18) {
  double x = 0.0;
  double y = 0.0;
  ck_assert_ldouble_eq_tol(s21_pow(y, x), pow(y, x), S21_M_T_EPS);
}
END_TEST

Suite *test_s21_pow_suite(void) {
  Suite *s1 = suite_create("s21_pow");
  TCase *o1 = tcase_create("originl_pow");

  tcase_add_test(o1, test_pow_1);
  tcase_add_test(o1, test_pow_2);
  tcase_add_test(o1, test_pow_3);
  tcase_add_test(o1, test_pow_4);
  tcase_add_test(o1, test_pow_5);
  tcase_add_test(o1, test_pow_6);
  tcase_add_test(o1, test_pow_7);
  tcase_add_test(o1, test_pow_8);
  tcase_add_test(o1, test_pow_9);
  tcase_add_test(o1, test_pow_10);
  tcase_add_test(o1, test_pow_11);
  tcase_add_test(o1, test_pow_12);
  tcase_add_test(o1, test_pow_13);
  tcase_add_test(o1, test_pow_14);
  tcase_add_test(o1, test_pow_15);
  tcase_add_test(o1, test_pow_16);
  tcase_add_test(o1, test_pow_17);
  tcase_add_test(o1, test_pow_18);

  suite_add_tcase(s1, o1);

  return s1;
}