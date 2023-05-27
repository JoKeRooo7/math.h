#include "test.h"

int main() {
  int failed_count_abs = 0;
  int failed_count_cos = 0;
  int failed_count_sin = 0;
  int failed_count_tan = 0;
  int failed_count_ceil = 0;
  int failed_count_exp = 0;
  int failed_count_fabs = 0;
  int failed_count_floor = 0;
  int failed_count_fmod = 0;
  int failed_count_log = 0;
  int failed_count_pow = 0;
  int failed_count_sqrt = 0;
  int failed_count_acos = 0;
  int failed_count_asin = 0;
  int failed_count_atan = 0;

  Suite *s21_abs, *s21_cos, *s21_sin, *s21_tan, *s21_acos, *s21_asin, *s21_atan,
      *s21_ceil, *s21_exp, *s21_fabs, *s21_floor, *s21_fmod, *s21_log, *s21_pow,
      *s21_sqrt;

  SRunner *runner_abs, *runner_cos, *runner_sin, *runner_tan, *runner_acos,
      *runner_asin, *runner_atan, *runner_ceil, *runner_exp, *runner_fabs,
      *runner_floor, *runner_fmod, *runner_log, *runner_pow, *runner_sqrt;

  s21_abs = test_s21_abs_suite();
  runner_abs = srunner_create(s21_abs);
  srunner_set_fork_status(runner_abs, CK_NOFORK);
  srunner_run_all(runner_abs, CK_NORMAL);
  failed_count_abs = srunner_ntests_failed(runner_abs);
  srunner_free(runner_abs);

  s21_cos = test_s21_cos_suite();
  runner_cos = srunner_create(s21_cos);
  srunner_set_fork_status(runner_cos, CK_NOFORK);
  srunner_run_all(runner_cos, CK_NORMAL);
  failed_count_cos = srunner_ntests_failed(runner_cos);
  srunner_free(runner_cos);

  s21_fmod = test_s21_fmod_suite();
  runner_fmod = srunner_create(s21_fmod);
  srunner_set_fork_status(runner_fmod, CK_NOFORK);
  srunner_run_all(runner_fmod, CK_NORMAL);
  failed_count_fmod = srunner_ntests_failed(runner_fmod);
  srunner_free(runner_fmod);

  s21_acos = test_s21_acos_suite();
  runner_acos = srunner_create(s21_acos);
  srunner_set_fork_status(runner_acos, CK_NOFORK);
  srunner_run_all(runner_acos, CK_NORMAL);
  failed_count_acos = srunner_ntests_failed(runner_acos);
  srunner_free(runner_acos);

  s21_asin = test_s21_asin_suite();
  runner_asin = srunner_create(s21_asin);
  srunner_set_fork_status(runner_asin, CK_NOFORK);
  srunner_run_all(runner_asin, CK_NORMAL);
  failed_count_asin = srunner_ntests_failed(runner_asin);
  srunner_free(runner_asin);

  s21_ceil = test_s21_ceil_suite();
  runner_ceil = srunner_create(s21_ceil);
  srunner_set_fork_status(runner_ceil, CK_NOFORK);
  srunner_run_all(runner_ceil, CK_NORMAL);
  failed_count_ceil = srunner_ntests_failed(runner_ceil);
  srunner_free(runner_ceil);

  s21_exp = test_s21_exp_suite();
  runner_exp = srunner_create(s21_exp);
  srunner_set_fork_status(runner_exp, CK_NOFORK);
  srunner_run_all(runner_exp, CK_NORMAL);
  failed_count_exp = srunner_ntests_failed(runner_exp);
  srunner_free(runner_exp);

  s21_log = test_s21_log_suite();
  runner_log = srunner_create(s21_log);
  srunner_set_fork_status(runner_log, CK_NOFORK);
  srunner_run_all(runner_log, CK_NORMAL);
  failed_count_log = srunner_ntests_failed(runner_log);
  srunner_free(runner_log);

  s21_floor = test_s21_floor_suite();
  runner_floor = srunner_create(s21_floor);
  srunner_set_fork_status(runner_floor, CK_NOFORK);
  srunner_run_all(runner_floor, CK_NORMAL);
  failed_count_floor = srunner_ntests_failed(runner_floor);
  srunner_free(runner_floor);

  s21_fabs = test_s21_fabs_suite();
  runner_fabs = srunner_create(s21_fabs);
  srunner_set_fork_status(runner_fabs, CK_NOFORK);
  srunner_run_all(runner_fabs, CK_NORMAL);
  failed_count_fabs = srunner_ntests_failed(runner_fabs);
  srunner_free(runner_fabs);

  s21_sin = test_s21_sin_suite();
  runner_sin = srunner_create(s21_sin);
  srunner_set_fork_status(runner_sin, CK_NOFORK);
  srunner_run_all(runner_sin, CK_NORMAL);
  failed_count_sin = srunner_ntests_failed(runner_sin);
  srunner_free(runner_sin);

  s21_tan = test_s21_tan_suite();
  runner_tan = srunner_create(s21_tan);
  srunner_set_fork_status(runner_tan, CK_NOFORK);
  srunner_run_all(runner_tan, CK_NORMAL);
  failed_count_tan = srunner_ntests_failed(runner_tan);
  srunner_free(runner_tan);

  s21_sqrt = test_s21_sqrt_suite();
  runner_sqrt = srunner_create(s21_sqrt);
  srunner_set_fork_status(runner_sqrt, CK_NOFORK);
  srunner_run_all(runner_sqrt, CK_NORMAL);
  failed_count_sqrt = srunner_ntests_failed(runner_sqrt);
  srunner_free(runner_sqrt);

  s21_atan = test_s21_atan_suite();
  runner_atan = srunner_create(s21_atan);
  srunner_set_fork_status(runner_atan, CK_NOFORK);
  srunner_run_all(runner_atan, CK_NORMAL);
  failed_count_atan = srunner_ntests_failed(runner_atan);
  srunner_free(runner_atan);

  s21_pow = test_s21_pow_suite();
  runner_pow = srunner_create(s21_pow);
  srunner_set_fork_status(runner_pow, CK_NOFORK);
  srunner_run_all(runner_pow, CK_NORMAL);
  failed_count_pow = srunner_ntests_failed(runner_pow);
  srunner_free(runner_pow);

  int all_count = failed_count_abs + failed_count_cos + failed_count_sin +
                  failed_count_tan + failed_count_ceil + failed_count_exp +
                  failed_count_fabs + failed_count_floor + failed_count_fmod +
                  failed_count_log + failed_count_pow + failed_count_sqrt +
                  failed_count_atan + failed_count_asin + failed_count_acos;

  return (all_count != 0) ? EXIT_FAILURE : EXIT_SUCCESS;
}