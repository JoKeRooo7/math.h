#include "test.h"

START_TEST(test_floor_1) {
  for (double i = 0.99; i >= -0.99; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_floor(i), floor(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_floor_2) {
  double n = -M_PI;
  ck_assert_ldouble_eq_tol(s21_floor(n), floor(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_floor_3) {
  double n = -0.9999;
  ck_assert_ldouble_eq_tol(s21_floor(n), floor(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_floor_4) {
  double n = 0.9999;
  ck_assert_ldouble_eq_tol(s21_floor(n), floor(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_floor_5) {
  double n = 0;
  ck_assert_ldouble_eq_tol(s21_floor(n), floor(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_floor_6) {
  double n = M_PI;
  ck_assert_ldouble_eq_tol(s21_floor(n), floor(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_floor_7) {
  double n = INFINITY;
  ck_assert_double_infinite(s21_floor(n));
}
END_TEST

START_TEST(test_floor_8) {
  double n = -INFINITY;
  ck_assert_double_infinite(s21_floor(n));
}
END_TEST

START_TEST(test_floor_9) {
  double n = NAN;
  ck_assert_double_nan(s21_floor(n));
}
END_TEST

START_TEST(test_floor_10) {
  double n = -NAN;
  ck_assert_double_nan(s21_floor(n));
}
END_TEST

START_TEST(test_floor_11) {
  double n = 0.0;
  ck_assert_ldouble_eq_tol(s21_floor(n), floor(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_floor_12) {
  for (double i = -0.100; i >= -0.999; i -= 0.01) {
    ck_assert_ldouble_eq_tol(s21_floor(i), floor(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_floor_13) {
  double n = 123456789.123456789;
  ck_assert_ldouble_eq_tol(s21_floor(n), floor(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_floor_14) {
  double n = 0.0000001;
  ck_assert_ldouble_eq_tol(s21_floor(n), floor(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_floor_15) {
  double n = 1 / 8 * M_PI;
  ck_assert_ldouble_eq_tol(s21_floor(n), floor(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_floor_16) {
  double n = M_PI / 254;
  ck_assert_ldouble_eq_tol(s21_floor(n), floor(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_floor_17) {
  double n = 0.123456;
  ck_assert_ldouble_eq_tol(s21_floor(n), floor(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_floor_18) {
  double n = -0.123456;
  ck_assert_ldouble_eq_tol(s21_floor(n), floor(n), S21_M_T_EPS);
}
END_TEST

Suite *test_s21_floor_suite(void) {
  Suite *s = suite_create("s21_floor");
  TCase *o = tcase_create("originl_floor");

  tcase_add_test(o, test_floor_1);
  tcase_add_test(o, test_floor_2);
  tcase_add_test(o, test_floor_3);
  tcase_add_test(o, test_floor_4);
  tcase_add_test(o, test_floor_5);
  tcase_add_test(o, test_floor_6);
  tcase_add_test(o, test_floor_7);
  tcase_add_test(o, test_floor_8);
  tcase_add_test(o, test_floor_9);
  tcase_add_test(o, test_floor_10);
  tcase_add_test(o, test_floor_11);
  tcase_add_test(o, test_floor_12);
  tcase_add_test(o, test_floor_13);
  tcase_add_test(o, test_floor_14);
  tcase_add_test(o, test_floor_15);
  tcase_add_test(o, test_floor_16);
  tcase_add_test(o, test_floor_17);
  tcase_add_test(o, test_floor_18);

  suite_add_tcase(s, o);
  return s;
}