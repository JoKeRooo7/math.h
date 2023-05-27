#include "test.h"

START_TEST(test_sqrt_1) {
  for (double k = 4 * S21_M_PI; k > 0; k -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_sqrt(k), sqrt(k), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_sqrt_2) {
  double n = -1;
  ck_assert_double_nan(s21_sqrt(n));
}
END_TEST

START_TEST(test_sqrt_3) {
  double n = -0.9999;
  ck_assert_double_nan(s21_sqrt(n));
}
END_TEST

START_TEST(test_sqrt_4) {
  double n = 0.9999;
  ck_assert_ldouble_eq_tol(s21_sqrt(n), sqrt(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sqrt_5) {
  double n = 0;
  ck_assert_ldouble_eq_tol(s21_sqrt(n), sqrt(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sqrt_6) {
  double n = 1;
  ck_assert_ldouble_eq_tol(s21_sqrt(n), sqrt(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sqrt_7) {
  double n = INFINITY;
  ck_assert_double_infinite(s21_sqrt(n));
}
END_TEST

START_TEST(test_sqrt_8) {
  double n = -INFINITY;
  ck_assert_double_nan(s21_sqrt(n));
}
END_TEST

START_TEST(test_sqrt_9) {
  double n = NAN;
  ck_assert_double_nan(s21_sqrt(n));
}
END_TEST

START_TEST(test_sqrt_10) {
  double n = -NAN;
  ck_assert_double_nan(s21_sqrt(n));
}
END_TEST

START_TEST(test_sqrt_11) {
  double n = 0.0;
  ck_assert_ldouble_eq_tol(s21_sqrt(n), sqrt(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sqrt_12) {
  for (double i = -100; i >= -900; i -= 2.4) {
    ck_assert_double_nan(s21_sqrt(i));
  }
}
END_TEST

START_TEST(test_sqrt_13) {
  double n = 2 * (-M_PI);
  ck_assert_double_nan(s21_sqrt(n));
}
END_TEST

START_TEST(test_sqrt_14) {
  double n = 8 * (-M_PI);
  ck_assert_double_nan(s21_sqrt(n));
}
END_TEST

START_TEST(test_sqrt_15) {
  double n = -0.123456789;
  ck_assert_double_nan(s21_sqrt(n));
}
END_TEST

START_TEST(test_sqrt_16) {
  double n = 0.123456789;
  ck_assert_ldouble_eq_tol(s21_sqrt(n), sqrt(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sqrt_17) {
  double n = 123456789.123456;
  ck_assert_ldouble_eq_tol(s21_sqrt(n), sqrt(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sqrt_18) {
  double n = -123456789.123456;
  ck_assert_double_nan(s21_sqrt(n));
}
END_TEST

START_TEST(test_sqrt_19) {
  double n = -0.0;
  ck_assert_ldouble_eq_tol(s21_sqrt(n), sqrt(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sqrt_20) {
  double n = 21.21;
  ck_assert_ldouble_eq_tol(s21_sqrt(n), sqrt(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_sqrt_21) {
  double n = -21.21;
  ck_assert_double_nan(s21_sqrt(n));
}
END_TEST

START_TEST(test_sqrt_22) {
  for (double k = 123456; k > 0; k -= 1) {
    ck_assert_ldouble_eq_tol(s21_sqrt(k), sqrt(k), S21_M_T_EPS);
  }
}
END_TEST

Suite *test_s21_sqrt_suite(void) {
  Suite *s = suite_create("s21_sqrt");
  TCase *o = tcase_create("originl_sqrt");

  tcase_add_test(o, test_sqrt_1);
  tcase_add_test(o, test_sqrt_2);
  tcase_add_test(o, test_sqrt_3);
  tcase_add_test(o, test_sqrt_4);
  tcase_add_test(o, test_sqrt_5);
  tcase_add_test(o, test_sqrt_6);
  tcase_add_test(o, test_sqrt_7);
  tcase_add_test(o, test_sqrt_8);
  tcase_add_test(o, test_sqrt_9);
  tcase_add_test(o, test_sqrt_10);
  tcase_add_test(o, test_sqrt_11);
  tcase_add_test(o, test_sqrt_12);
  tcase_add_test(o, test_sqrt_13);
  tcase_add_test(o, test_sqrt_14);
  tcase_add_test(o, test_sqrt_15);
  tcase_add_test(o, test_sqrt_16);
  tcase_add_test(o, test_sqrt_17);
  tcase_add_test(o, test_sqrt_18);
  tcase_add_test(o, test_sqrt_19);
  tcase_add_test(o, test_sqrt_20);
  tcase_add_test(o, test_sqrt_21);
  tcase_add_test(o, test_sqrt_22);

  suite_add_tcase(s, o);
  return s;
}
