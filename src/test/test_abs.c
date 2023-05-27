#include "test.h"

START_TEST(test_abs_1) {
  int n = -1;
  ck_assert_int_eq(s21_abs(n), abs(n));
}
END_TEST

START_TEST(test_abs_2) {
  int n = 1;
  ck_assert_int_eq(s21_abs(n), abs(n));
}
END_TEST

START_TEST(test_abs_3) {
  int n = -123456789;
  ck_assert_int_eq(s21_abs(n), abs(n));
}
END_TEST

START_TEST(test_abs_4) {
  int n = 123456789;
  ck_assert_int_eq(s21_abs(n), abs(n));
}
END_TEST

START_TEST(test_abs_5) {
  int n = -0;
  ck_assert_int_eq(s21_abs(n), abs(n));
}
END_TEST

START_TEST(test_abs_6) {
  int n = +0;
  ck_assert_int_eq(s21_abs(n), abs(n));
}
END_TEST

START_TEST(test_abs_7) {
  int n = (int)INFINITY;
  ck_assert_int_eq(s21_abs(n), abs(n));
}
END_TEST

START_TEST(test_abs_8) {
  int n = (int)-INFINITY;
  ck_assert_int_eq(s21_abs(n), abs(n));
}
END_TEST

START_TEST(test_abs_9) {
  int n = (int)NAN;
  ck_assert_int_eq(s21_abs(n), abs(n));
}
END_TEST

START_TEST(test_abs_10) {
  int n = -56;
  ck_assert_int_eq(s21_abs(n), abs(n));
}
END_TEST

Suite *test_s21_abs_suite(void) {
  Suite *s = suite_create("s21_abs");
  TCase *o = tcase_create("originl_abs");

  tcase_add_test(o, test_abs_1);
  tcase_add_test(o, test_abs_2);
  tcase_add_test(o, test_abs_3);
  tcase_add_test(o, test_abs_4);
  tcase_add_test(o, test_abs_5);
  tcase_add_test(o, test_abs_6);
  tcase_add_test(o, test_abs_7);
  tcase_add_test(o, test_abs_8);
  tcase_add_test(o, test_abs_9);
  tcase_add_test(o, test_abs_10);

  suite_add_tcase(s, o);
  return s;
}