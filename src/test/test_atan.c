#include "test.h"

START_TEST(test_atan_1) {
  for (double i = 0.99; i >= -0.99; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_atan(i), atan(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_atan_2) {
  double n = -M_PI;
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_atan_3) {
  double n = -0.99;
  ck_assert_ldouble_eq_tol(s21_atan(n), atan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_atan_4) {
  double n = 0.99;
  ck_assert_ldouble_eq_tol(s21_atan(n), atan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_atan_5) {
  double n = 0;
  ck_assert_ldouble_eq_tol(s21_atan(n), atan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_atan_6) {
  double n = M_PI;
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_atan_7) {
  double n = INFINITY;
  ck_assert_ldouble_eq_tol(s21_atan(n), atan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_atan_8) {
  double n = -INFINITY;
  ck_assert_ldouble_eq_tol(s21_atan(n), atan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_atan_9) {
  double n = NAN;
  ck_assert_double_nan(s21_atan(n));
}
END_TEST

START_TEST(test_atan_10) {
  double n = -NAN;
  ck_assert_double_nan(s21_atan(n));
}
END_TEST

START_TEST(test_atan_11) {
  double n = 0.0;
  ck_assert_ldouble_eq_tol(s21_atan(n), atan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_atan_12) {
  for (double i = -0.100; i >= -0.900; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_atan(i), atan(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_atan_13) {
  double n = 2 * (-M_PI);
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_atan_14) {
  double n = 0.000001;
  ck_assert_ldouble_eq_tol(s21_atan(n), atan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_atan_15) {
  double n = 1 / 8 * M_PI;
  ck_assert_ldouble_eq_tol(s21_atan(n), atan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_atan_16) {
  double n = M_PI / 4;
  ck_assert_ldouble_eq_tol(s21_atan(n), atan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_atan_17) {
  double n = 0.123456;
  ck_assert_ldouble_eq_tol(s21_atan(n), atan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_atan_18) {
  double n = -0.123456;
  ck_assert_ldouble_eq_tol(s21_atan(n), atan(n), S21_M_T_EPS);
}
END_TEST

Suite *test_s21_atan_suite(void) {
  Suite *s = suite_create("s21_atan");
  TCase *o = tcase_create("originl_atan");

  tcase_add_test(o, test_atan_1);
  tcase_add_test(o, test_atan_2);
  tcase_add_test(o, test_atan_3);
  tcase_add_test(o, test_atan_4);
  tcase_add_test(o, test_atan_5);
  tcase_add_test(o, test_atan_6);
  tcase_add_test(o, test_atan_7);
  tcase_add_test(o, test_atan_8);
  tcase_add_test(o, test_atan_9);
  tcase_add_test(o, test_atan_10);
  tcase_add_test(o, test_atan_11);
  tcase_add_test(o, test_atan_12);
  tcase_add_test(o, test_atan_13);
  tcase_add_test(o, test_atan_14);
  tcase_add_test(o, test_atan_15);
  tcase_add_test(o, test_atan_16);
  tcase_add_test(o, test_atan_17);
  tcase_add_test(o, test_atan_18);

  suite_add_tcase(s, o);
  return s;
}