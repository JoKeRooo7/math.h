#include "test.h"

START_TEST(test_tan_1) {
  for (int i = 10; i >= -10; i -= 2) {
    for (double k = 2 * M_PI; k > -2 * M_PI; k -= M_PI / 5) {
      ck_assert_ldouble_eq_tol(s21_tan(k + i * M_PI), tan(k + i * M_PI),
                               S21_M_T_EPS);
    }
  }
}
END_TEST

START_TEST(test_tan_2) {
  double n = -M_PI;
  ck_assert_ldouble_eq_tol(s21_tan(n), tan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_tan_3) {
  double n = -0.9999;
  ck_assert_ldouble_eq_tol(s21_tan(n), tan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_tan_4) {
  double n = 0.9999;
  ck_assert_ldouble_eq_tol(s21_tan(n), tan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_tan_5) {
  double n = 0;
  ck_assert_ldouble_eq_tol(s21_tan(n), tan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_tan_6) {
  double n = M_PI;
  ck_assert_ldouble_eq_tol(s21_tan(n), tan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_tan_7) {
  double n = INFINITY;
  ck_assert_double_nan(s21_tan(n));
}
END_TEST

START_TEST(test_tan_8) {
  double n = -INFINITY;
  ck_assert_double_nan(s21_tan(n));
}
END_TEST

START_TEST(test_tan_9) {
  double n = NAN;
  ck_assert_double_nan(s21_tan(n));
}
END_TEST

START_TEST(test_tan_10) {
  double n = -NAN;
  ck_assert_double_nan(s21_tan(n));
}
END_TEST

START_TEST(test_tan_11) {
  double n = 0.0;
  ck_assert_ldouble_eq_tol(s21_tan(n), tan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_tan_12) {
  for (double i = 10; i >= -10; i -= 0.5) {
    ck_assert_ldouble_eq_tol(s21_tan(i), tan(i), S21_M_T_EPS);
  }
}
END_TEST

START_TEST(test_tan_13) {
  double n = 2 * (-M_PI);
  ck_assert_ldouble_eq_tol(s21_tan(n), tan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_tan_14) {
  double n = 8 * (-M_PI);
  ck_assert_ldouble_eq_tol(s21_tan(n), tan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_tan_15) {
  double n = 8 * M_PI;
  ck_assert_ldouble_eq_tol(s21_tan(n), tan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_tan_16) {
  double n = 2 * M_PI;
  ck_assert_ldouble_eq_tol(s21_tan(n), tan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_tan_17) {
  double n = 123456.123456;
  ck_assert_ldouble_eq_tol(s21_tan(n), tan(n), S21_M_T_EPS);
}
END_TEST

START_TEST(test_tan_18) {
  double n = -123456.123456;
  ck_assert_ldouble_eq_tol(s21_tan(n), tan(n), S21_M_T_EPS);
}
END_TEST

Suite *test_s21_tan_suite(void) {
  Suite *s = suite_create("s21_tan");
  TCase *o = tcase_create("originl_tan");

  tcase_add_test(o, test_tan_1);
  tcase_add_test(o, test_tan_2);
  tcase_add_test(o, test_tan_3);
  tcase_add_test(o, test_tan_4);
  tcase_add_test(o, test_tan_5);
  tcase_add_test(o, test_tan_6);
  tcase_add_test(o, test_tan_7);
  tcase_add_test(o, test_tan_8);
  tcase_add_test(o, test_tan_9);
  tcase_add_test(o, test_tan_10);
  tcase_add_test(o, test_tan_11);
  tcase_add_test(o, test_tan_12);
  tcase_add_test(o, test_tan_13);
  tcase_add_test(o, test_tan_14);
  tcase_add_test(o, test_tan_15);
  tcase_add_test(o, test_tan_16);
  tcase_add_test(o, test_tan_17);
  tcase_add_test(o, test_tan_18);

  suite_add_tcase(s, o);
  return s;
}