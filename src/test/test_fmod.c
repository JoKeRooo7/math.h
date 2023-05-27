#include "test.h"

START_TEST(test_fmod_1) {
  double x = -4.2;
  double y = 2.1;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fmod_2) {
  double x = -21.21;
  double y = 21.21;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fmod_3) {
  double x = -2.789;
  double y = 1.0;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fmod_4) {
  double x = 3.21;
  double y = 0.0;
  ck_assert_double_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_5) {
  double x = 0.0;
  double y = 8.36;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fmod_6) {
  double x = -123456789.123456799;
  double y = 2.2121;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fmod_7) {
  double x = -M_PI;
  double y = 0.21;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fmod_8) {
  double x = -INFINITY;
  double y = 0.21;
  ck_assert_double_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_9) {
  double x = INFINITY;
  double y = 0.21;
  ck_assert_double_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_10) {
  double x = NAN;
  double y = 0.21;
  ck_assert_double_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_11) {
  double x = -NAN;
  double y = 2.1;
  ck_assert_double_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_12) {
  double x = -INFINITY;
  double y = 0.21;
  ck_assert_ldouble_eq_tol(s21_fmod(y, x), fmod(y, x), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fmod_13) {
  double x = INFINITY;
  double y = 0.21;
  ck_assert_ldouble_eq_tol(s21_fmod(y, x), fmod(y, x), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fmod_14) {
  double x = INFINITY;
  double y = 0.21;
  ck_assert_ldouble_eq_tol(s21_fmod(y, x), fmod(y, x), S21_M_T_EPS);
}
END_TEST

START_TEST(test_fmod_15) {
  double x = INFINITY;
  double y = INFINITY;
  ck_assert_double_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_16) {
  double x = -INFINITY;
  double y = -INFINITY;
  ck_assert_double_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_17) {
  double x = -NAN;
  double y = 0;
  ck_assert_double_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_18) {
  double x = 0.0;
  double y = 0.0;
  ck_assert_double_nan(s21_fmod(x, y));
}
END_TEST

Suite *test_s21_fmod_suite(void) {
  Suite *s1 = suite_create("s21_fmod");
  TCase *o1 = tcase_create("originl_fmod");

  tcase_add_test(o1, test_fmod_1);
  tcase_add_test(o1, test_fmod_2);
  tcase_add_test(o1, test_fmod_3);
  tcase_add_test(o1, test_fmod_4);
  tcase_add_test(o1, test_fmod_5);
  tcase_add_test(o1, test_fmod_6);
  tcase_add_test(o1, test_fmod_7);
  tcase_add_test(o1, test_fmod_8);
  tcase_add_test(o1, test_fmod_9);
  tcase_add_test(o1, test_fmod_10);
  tcase_add_test(o1, test_fmod_11);
  tcase_add_test(o1, test_fmod_12);
  tcase_add_test(o1, test_fmod_13);
  tcase_add_test(o1, test_fmod_14);
  tcase_add_test(o1, test_fmod_15);
  tcase_add_test(o1, test_fmod_16);
  tcase_add_test(o1, test_fmod_17);
  tcase_add_test(o1, test_fmod_18);

  suite_add_tcase(s1, o1);

  return s1;
}