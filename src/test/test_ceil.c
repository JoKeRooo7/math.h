#include "test.h"

START_TEST(test_ceil_1) {
  for (double i = 0.99; i >= -0.99; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_ceil(i), ceil(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_ceil_2) {
  double n = -M_PI;
  ck_assert_ldouble_eq_tol(s21_ceil(n), ceil(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_ceil_3) {
  double n = -0.9999;
  ck_assert_ldouble_eq_tol(s21_ceil(n), ceil(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_ceil_4) {
  double n = 0.9999;
  ck_assert_ldouble_eq_tol(s21_ceil(n), ceil(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_ceil_5) {
  double n = 0;
  ck_assert_ldouble_eq_tol(s21_ceil(n), ceil(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_ceil_6) {
  double n = M_PI;
  ck_assert_ldouble_eq_tol(s21_ceil(n), ceil(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_ceil_7) {
  double n = INFINITY;
  ck_assert_double_infinite(s21_ceil(n));
}
END_TEST

START_TEST(test_ceil_8) {
  double n = -INFINITY;
  ck_assert_double_infinite(s21_ceil(n));
}
END_TEST

START_TEST(test_ceil_9) {
  double n = NAN;
  ck_assert_double_nan(s21_ceil(n));
}
END_TEST

START_TEST(test_ceil_10) {
  double n = -NAN;
  ck_assert_double_nan(s21_ceil(n));
}
END_TEST

START_TEST(test_ceil_11) {
  double n = 0.0;
  ck_assert_ldouble_eq_tol(s21_ceil(n), ceil(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_ceil_12) {
  for (double i = -0.100; i >= -0.999; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_ceil(i), ceil(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_ceil_13) {
  double n = 123456789.123456789;
  ck_assert_ldouble_eq_tol(s21_ceil(n), ceil(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_ceil_14) {
  double n = 0.0000001;
  ck_assert_ldouble_eq_tol(s21_ceil(n), ceil(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_ceil_15) {
  double n = 1 / 8 * M_PI;
  ck_assert_ldouble_eq_tol(s21_ceil(n), ceil(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_ceil_16) {
  double n = M_PI / 254;
  ck_assert_ldouble_eq_tol(s21_ceil(n), ceil(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_ceil_17) {
  double n = 0.123456;
  ck_assert_ldouble_eq_tol(s21_ceil(n), ceil(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_ceil_18) {
  double n = -0.123456;
  ck_assert_ldouble_eq_tol(s21_ceil(n), ceil(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_ceil_19) {
  for (double i = 100; i >= -100; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_ceil(i), ceil(i), S21_M_T_EPS);
  }
}
END_TEST

Suite *test_s21_ceil_suite(void) {
  Suite *s = suite_create("s21_ceil");
  TCase *o = tcase_create("originl_ceil");

  tcase_add_test(o, test_ceil_1);
  tcase_add_test(o, test_ceil_2);
  tcase_add_test(o, test_ceil_3);
  tcase_add_test(o, test_ceil_4);
  tcase_add_test(o, test_ceil_5);
  tcase_add_test(o, test_ceil_6);
  tcase_add_test(o, test_ceil_7);
  tcase_add_test(o, test_ceil_8);
  tcase_add_test(o, test_ceil_9);
  tcase_add_test(o, test_ceil_10);
  tcase_add_test(o, test_ceil_11);
  tcase_add_test(o, test_ceil_12);
  tcase_add_test(o, test_ceil_13);
  tcase_add_test(o, test_ceil_14);
  tcase_add_test(o, test_ceil_15);
  tcase_add_test(o, test_ceil_16);
  tcase_add_test(o, test_ceil_17);
  tcase_add_test(o, test_ceil_18);
  tcase_add_test(o, test_ceil_19);

  suite_add_tcase(s, o);
  return s;
}