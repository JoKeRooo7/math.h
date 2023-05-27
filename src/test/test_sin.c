#include "test.h"

START_TEST(test_sin_1) {
  for (int i = 10; i >= -10; i -= 2) {
    for (double k = 2 * M_PI; k > -2 * M_PI; k -= M_PI / 5) {
      ck_assert_ldouble_eq_tol(s21_sin(k + i * M_PI), sin(k + i * M_PI),
                               S21_M_T_EPS);
    }
  }
}
END_TEST

START_TEST(test_sin_2) {
  double n = -S21_M_PI;
  ck_assert_ldouble_eq_tol(s21_sin(n), sin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sin_3) {
  double n = -0.9999;
  ck_assert_ldouble_eq_tol(s21_sin(n), sin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sin_4) {
  double n = 0.9999;
  ck_assert_ldouble_eq_tol(s21_sin(n), sin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sin_5) {
  double n = 0;
  ck_assert_ldouble_eq_tol(s21_sin(n), sin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sin_6) {
  double n = M_PI;
  ck_assert_ldouble_eq_tol(s21_sin(n), sin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sin_7) {
  double n = INFINITY;
  ck_assert_double_nan(s21_sin(n));
}
END_TEST

START_TEST(test_sin_8) {
  double n = -INFINITY;
  ck_assert_double_nan(s21_sin(n));
}
END_TEST

START_TEST(test_sin_9) {
  double n = NAN;
  ck_assert_double_nan(s21_sin(n));
}
END_TEST

START_TEST(test_sin_10) {
  double n = -NAN;
  ck_assert_double_nan(s21_sin(n));
}
END_TEST

START_TEST(test_sin_11) {
  double n = 0.0;
  ck_assert_ldouble_eq_tol(s21_sin(n), sin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sin_12) {
  for (double i = -100; i >= -900; i -= 2.4) {
    ck_assert_ldouble_eq_tol(s21_sin(i), sin(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_sin_13) {
  double n = 2 * (-M_PI);
  ck_assert_ldouble_eq_tol(s21_sin(n), sin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sin_14) {
  double n = 8 * (-M_PI);
  ck_assert_ldouble_eq_tol(s21_sin(n), sin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sin_15) {
  double n = 8 * M_PI;
  ck_assert_ldouble_eq_tol(s21_sin(n), sin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sin_16) {
  double n = 2 * M_PI;
  ck_assert_ldouble_eq_tol(s21_sin(n), sin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sin_17) {
  double n = 123456.123456;
  ck_assert_ldouble_eq_tol(s21_sin(n), sin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sin_18) {
  double n = -123456.123456;
  ck_assert_ldouble_eq_tol(s21_sin(n), sin(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sin_19) {
  for (double i = 0; i < 10; i++) {
    ck_assert_ldouble_eq_tol(s21_sin(i), sin(i), S21_M_T_EPS);
  }
}
END_TEST

Suite *test_s21_sin_suite(void) {
  Suite *s = suite_create("s21_sin");
  TCase *o = tcase_create("originl_sin");

  tcase_add_test(o, test_sin_1);
  tcase_add_test(o, test_sin_2);
  tcase_add_test(o, test_sin_3);
  tcase_add_test(o, test_sin_4);
  tcase_add_test(o, test_sin_5);
  tcase_add_test(o, test_sin_6);
  tcase_add_test(o, test_sin_7);
  tcase_add_test(o, test_sin_8);
  tcase_add_test(o, test_sin_9);
  tcase_add_test(o, test_sin_10);
  tcase_add_test(o, test_sin_11);
  tcase_add_test(o, test_sin_12);
  tcase_add_test(o, test_sin_13);
  tcase_add_test(o, test_sin_14);
  tcase_add_test(o, test_sin_15);
  tcase_add_test(o, test_sin_16);
  tcase_add_test(o, test_sin_17);
  tcase_add_test(o, test_sin_18);
  tcase_add_test(o, test_sin_19);

  suite_add_tcase(s, o);
  return s;
}