#include "test.h"

START_TEST(test_log_1) {
  for (double k = 4 * S21_M_PI; k > 0; k -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_log(k), log(k), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_log_2) {
  double n = -1;
  ck_assert_double_nan(s21_log(n));
}
END_TEST

START_TEST(test_log_3) {
  double n = -0.9999;
  ck_assert_double_nan(s21_log(n));
}
END_TEST

START_TEST(test_log_4) {
  double n = 0.9999;
  ck_assert_ldouble_eq_tol(s21_log(n), log(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_log_5) {
  double n = 0;
  ck_assert_double_infinite(s21_log(n));
}
END_TEST

START_TEST(test_log_6) {
  double n = 1;
  ck_assert_ldouble_eq_tol(s21_log(n), log(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_log_7) {
  double n = INFINITY;
  ck_assert_double_infinite(s21_log(n));
}
END_TEST

START_TEST(test_log_8) {
  double n = -INFINITY;
  ck_assert_double_nan(s21_log(n));
}
END_TEST

START_TEST(test_log_9) {
  double n = NAN;
  ck_assert_double_nan(s21_log(n));
}
END_TEST

START_TEST(test_log_10) {
  double n = -NAN;
  ck_assert_double_nan(s21_log(n));
}
END_TEST

START_TEST(test_log_11) {
  double n = 0.0;
  ck_assert_double_infinite(s21_log(n));
}
END_TEST

START_TEST(test_log_12) {
  for (double i = -100; i >= -900; i -= 2.4) {
    ck_assert_double_nan(s21_log(i));
  }
}
END_TEST

START_TEST(test_log_13) {
  double n = 2 * (-M_PI);
  ck_assert_double_nan(s21_log(n));
}
END_TEST

START_TEST(test_log_14) {
  double n = 8 * (-M_PI);
  ck_assert_double_nan(s21_log(n));
}
END_TEST

START_TEST(test_log_15) {
  double n = -0.123456789;
  ck_assert_double_nan(s21_log(n));
}
END_TEST

START_TEST(test_log_16) {
  double n = 0.123456789;
  ck_assert_ldouble_eq_tol(s21_log(n), log(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_log_17) {
  double n = 21.123456;
  ck_assert_ldouble_eq_tol(s21_log(n), log(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_log_18) {
  double n = -123456.123456;
  ck_assert_double_nan(s21_log(n));
}
END_TEST

START_TEST(test_log_19) {
  double n = -0.0;
  ck_assert_double_infinite(s21_log(n));
}
END_TEST

START_TEST(test_log_20) {
  double n = 21.21;
  ck_assert_ldouble_eq_tol(s21_log(n), log(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_log_21) {
  double n = -21.21;
  ck_assert_double_nan(s21_log(n));
}
END_TEST

START_TEST(test_log_22) {
  for (double k = 123456; k > 0; k -= 1) {
    ck_assert_ldouble_eq_tol(s21_log(k), log(k), S21_M_T_EPS);
  }
}
END_TEST

Suite *test_s21_log_suite(void) {
  Suite *s = suite_create("s21_log");
  TCase *o = tcase_create("originl_log");

  tcase_add_test(o, test_log_1);
  tcase_add_test(o, test_log_2);
  tcase_add_test(o, test_log_3);
  tcase_add_test(o, test_log_4);
  tcase_add_test(o, test_log_5);
  tcase_add_test(o, test_log_6);
  tcase_add_test(o, test_log_7);
  tcase_add_test(o, test_log_8);
  tcase_add_test(o, test_log_9);
  tcase_add_test(o, test_log_10);
  tcase_add_test(o, test_log_11);
  tcase_add_test(o, test_log_12);
  tcase_add_test(o, test_log_13);
  tcase_add_test(o, test_log_14);
  tcase_add_test(o, test_log_15);
  tcase_add_test(o, test_log_16);
  tcase_add_test(o, test_log_17);
  tcase_add_test(o, test_log_18);
  tcase_add_test(o, test_log_19);
  tcase_add_test(o, test_log_20);
  tcase_add_test(o, test_log_21);
  tcase_add_test(o, test_log_22);

  suite_add_tcase(s, o);
  return s;
}