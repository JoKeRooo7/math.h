#include "test.h"

START_TEST(test_cos_1) {
  for (int i = 10; i >= -10; i -= 2) {
    for (double k = 2 * M_PI; k > -2 * M_PI; k -= M_PI / 5) {
      ck_assert_ldouble_eq_tol(s21_cos(k + i * M_PI), cos(k + i * M_PI),
                               S21_M_T_EPS);
    }
  }
}
END_TEST

START_TEST(test_cos_2) {
  double n = -M_PI;
  ck_assert_ldouble_eq_tol(s21_cos(n), cos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_cos_3) {
  double n = -0.9999;
  ck_assert_ldouble_eq_tol(s21_cos(n), cos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_cos_4) {
  double n = 0.9999;
  ck_assert_ldouble_eq_tol(s21_cos(n), cos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_cos_5) {
  double n = 0;
  ck_assert_ldouble_eq_tol(s21_cos(n), cos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_cos_6) {
  double n = M_PI;
  ck_assert_ldouble_eq_tol(s21_cos(n), cos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_cos_7) {
  double n = INFINITY;
  ck_assert_double_nan(s21_cos(n));
}
END_TEST

START_TEST(test_cos_8) {
  double n = -INFINITY;
  ck_assert_double_nan(s21_cos(n));
}
END_TEST

START_TEST(test_cos_9) {
  double n = NAN;
  ck_assert_double_nan(s21_cos(n));
}
END_TEST

START_TEST(test_cos_10) {
  double n = -NAN;
  ck_assert_double_nan(s21_cos(n));
}
END_TEST

START_TEST(test_cos_11) {
  double n = 0.0;
  ck_assert_ldouble_eq_tol(s21_cos(n), cos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_cos_12) {
  for (double i = -100; i >= -900; i -= 2.4) {
    ck_assert_ldouble_eq_tol(s21_cos(i), cos(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_cos_13) {
  double n = 2 * (-S21_M_PI);
  ck_assert_ldouble_eq_tol(s21_cos(n), cos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_cos_14) {
  double n = 8 * (-M_PI);
  ck_assert_ldouble_eq_tol(s21_cos(n), cos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_cos_15) {
  double n = 8 * M_PI;
  ck_assert_ldouble_eq_tol(s21_cos(n), cos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_cos_16) {
  double n = 2 * M_PI;
  ck_assert_ldouble_eq_tol(s21_cos(n), cos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_cos_17) {
  double n = 123456.123456;
  ck_assert_ldouble_eq_tol(s21_cos(n), cos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_cos_18) {
  double n = -123456.123456;
  ck_assert_ldouble_eq_tol(s21_cos(n), cos(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_cos_19) {
  for (double i = 0; i < 10; i++) {
    ck_assert_ldouble_eq_tol(s21_cos(i), cos(i), S21_M_T_EPS);
  }
}
END_TEST

Suite *test_s21_cos_suite(void) {
  Suite *s = suite_create("s21_cos");
  TCase *o = tcase_create("originl_cos");

  tcase_add_test(o, test_cos_1);
  tcase_add_test(o, test_cos_2);
  tcase_add_test(o, test_cos_3);
  tcase_add_test(o, test_cos_4);
  tcase_add_test(o, test_cos_5);
  tcase_add_test(o, test_cos_6);
  tcase_add_test(o, test_cos_7);
  tcase_add_test(o, test_cos_8);
  tcase_add_test(o, test_cos_9);
  tcase_add_test(o, test_cos_10);
  tcase_add_test(o, test_cos_11);
  tcase_add_test(o, test_cos_12);
  tcase_add_test(o, test_cos_13);
  tcase_add_test(o, test_cos_14);
  tcase_add_test(o, test_cos_15);
  tcase_add_test(o, test_cos_16);
  tcase_add_test(o, test_cos_17);
  tcase_add_test(o, test_cos_18);
  tcase_add_test(o, test_cos_19);

  suite_add_tcase(s, o);
  return s;
}