#include "test.h"

START_TEST(test_fabs_1) {
  for (double i = 0.99; i >= -0.99; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_fabs(i), fabs(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_fabs_2) {
  double n = -S21_M_PI;
  ck_assert_ldouble_eq_tol(s21_fabs(n), fabs(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fabs_3) {
  double n = -0.9999;
  ck_assert_ldouble_eq_tol(s21_fabs(n), fabs(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fabs_4) {
  double n = 0.9999;
  ck_assert_ldouble_eq_tol(s21_fabs(n), fabs(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fabs_5) {
  double n = 0;
  ck_assert_ldouble_eq_tol(s21_fabs(n), fabs(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fabs_6) {
  double n = M_PI;
  ck_assert_ldouble_eq_tol(s21_fabs(n), fabs(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fabs_7) {
  double n = INFINITY;
  ck_assert_double_infinite(s21_fabs(n));
}
END_TEST

START_TEST(test_fabs_8) {
  double n = -INFINITY;
  ck_assert_double_infinite(s21_fabs(n));
}
END_TEST

START_TEST(test_fabs_9) {
  double n = NAN;
  ck_assert_double_nan(s21_fabs(n));
}
END_TEST

START_TEST(test_fabs_10) {
  double n = -NAN;
  ck_assert_double_nan(s21_fabs(n));
}
END_TEST

START_TEST(test_fabs_11) {
  double n = 0.0;
  ck_assert_ldouble_eq_tol(s21_fabs(n), fabs(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fabs_12) {
  for (double i = -0.100; i >= -0.999; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_fabs(i), fabs(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_fabs_13) {
  double n = 123456789.123456789;
  ck_assert_ldouble_eq_tol(s21_fabs(n), fabs(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fabs_14) {
  double n = 0.0000001;
  ck_assert_ldouble_eq_tol(s21_fabs(n), fabs(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fabs_15) {
  double n = 1 / 8 * M_PI;
  ck_assert_ldouble_eq_tol(s21_fabs(n), fabs(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fabs_16) {
  double n = M_PI / 254;
  ck_assert_ldouble_eq_tol(s21_fabs(n), fabs(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fabs_17) {
  double n = 0.123456;
  ck_assert_ldouble_eq_tol(s21_fabs(n), fabs(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fabs_18) {
  double n = -0.123456;
  ck_assert_ldouble_eq_tol(s21_fabs(n), fabs(n), S21_M_T_EPS);
}
END_TEST

Suite *test_s21_fabs_suite(void) {
  Suite *s = suite_create("s21_fabs");
  TCase *o = tcase_create("originl_fabs");

  tcase_add_test(o, test_fabs_1);
  tcase_add_test(o, test_fabs_2);
  tcase_add_test(o, test_fabs_3);
  tcase_add_test(o, test_fabs_4);
  tcase_add_test(o, test_fabs_5);
  tcase_add_test(o, test_fabs_6);
  tcase_add_test(o, test_fabs_7);
  tcase_add_test(o, test_fabs_8);
  tcase_add_test(o, test_fabs_9);
  tcase_add_test(o, test_fabs_10);
  tcase_add_test(o, test_fabs_11);
  tcase_add_test(o, test_fabs_12);
  tcase_add_test(o, test_fabs_13);
  tcase_add_test(o, test_fabs_14);
  tcase_add_test(o, test_fabs_15);
  tcase_add_test(o, test_fabs_16);
  tcase_add_test(o, test_fabs_17);
  tcase_add_test(o, test_fabs_18);

  suite_add_tcase(s, o);
  return s;
}