#include "test.h"

START_TEST(test_acos_1) {
  for (double i = 0.99; i >= -0.99; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_acos(i), acos(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_acos_2) {
  double n = -M_PI;
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_acos_3) {
  double n = -0.9999;
  ck_assert_ldouble_eq_tol(s21_acos(n), acos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_acos_4) {
  double n = 0.9999;
  ck_assert_ldouble_eq_tol(s21_acos(n), acos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_acos_5) {
  double n = 0;
  ck_assert_ldouble_eq_tol(s21_acos(n), acos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_acos_6) {
  double n = M_PI;
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_acos_7) {
  double n = INFINITY;
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_acos_8) {
  double n = -INFINITY;
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_acos_9) {
  double n = NAN;
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_acos_10) {
  double n = -NAN;
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_acos_11) {
  double n = 0.0;
  ck_assert_ldouble_eq_tol(s21_acos(n), acos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_acos_12) {
  for (double i = -0.100; i >= -0.999; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_acos(i), acos(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_acos_13) {
  double n = 2 * (-M_PI);
  ck_assert_double_nan(s21_acos(n));
}
END_TEST

START_TEST(test_acos_14) {
  double n = 0.0000001;
  ck_assert_ldouble_eq_tol(s21_acos(n), acos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_acos_15) {
  double n = 1 / 8 * M_PI;
  ck_assert_ldouble_eq_tol(s21_acos(n), acos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_acos_16) {
  double n = M_PI / 4;
  ck_assert_ldouble_eq_tol(s21_acos(n), acos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_acos_17) {
  double n = 0.123456;
  ck_assert_ldouble_eq_tol(s21_acos(n), acos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_acos_18) {
  double n = -0.123456;
  ck_assert_ldouble_eq_tol(s21_acos(n), acos(n), S21_M_T_EPS);
}
END_TEST

Suite *test_s21_acos_suite(void) {
  Suite *s = suite_create("s21_acos");
  TCase *o = tcase_create("originl_acos");

  tcase_add_test(o, test_acos_1);
  tcase_add_test(o, test_acos_2);
  tcase_add_test(o, test_acos_3);
  tcase_add_test(o, test_acos_4);
  tcase_add_test(o, test_acos_5);
  tcase_add_test(o, test_acos_6);
  tcase_add_test(o, test_acos_7);
  tcase_add_test(o, test_acos_8);
  tcase_add_test(o, test_acos_9);
  tcase_add_test(o, test_acos_10);
  tcase_add_test(o, test_acos_11);
  tcase_add_test(o, test_acos_12);
  tcase_add_test(o, test_acos_13);
  tcase_add_test(o, test_acos_14);
  tcase_add_test(o, test_acos_15);
  tcase_add_test(o, test_acos_16);
  tcase_add_test(o, test_acos_17);
  tcase_add_test(o, test_acos_18);

  suite_add_tcase(s, o);
  return s;
}