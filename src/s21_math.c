#include "s21_math.h"

#include <stdio.h>

unsigned long long int s21_factorial(long int x);
long double s21_round(double x);
long double s21_atan1(double x);

int s21_abs(int x) {
  if (x < 0) x *= -1;
  return x;
}

long double s21_fabs(double x) {
  if (x < 0) x *= -1;
  return x;
}

long double s21_floor(double x) {
  if (x != x || x >= S21_M_INF || x <= -S21_M_INF) {
    x = x;
  } else if ((long long int)x == x) {
    x = x;
  } else if (x < 0) {
    x = -((long long int)-x * 1.0 + 1);
  } else {
    x = (long long int)x * 1.0;
  }
  return x;
}

long double s21_ceil(double x) {
  if (x != x || x == S21_M_INF || x == -S21_M_INF || x == 0) {
    x = x;
  } else if ((long long int)x == x) {
    x = x;
  } else if (x < 0) {
    x = -((long long int)-x * 1.0);
  } else {
    x = ((long long int)x + 1) * 1.0;
  }
  return x;
}

long double s21_fmod(double x, double y) {
  if (y == 0.0 || x == S21_M_INF || x == -S21_M_INF) {
    x = S21_M_NAN;
  } else if (y == S21_M_INF || y == -S21_M_INF) {
    x = x;
  } else {
    x -= (long long int)(x / y) * y;
  }
  return x;
}

unsigned long long int s21_factorial(long int x) {
  if (x == 0 || x == 1) return 1;
  return x * s21_factorial(x - 1);
}

long double s21_pow(double base, double exp) {
  long double res = 1;
  if (exp == 0) {
    res = 1;
  } else if (base != base || exp != exp) {
    res = 0. / 0.;
  } else if (base <= -S21_M_INF && exp <= -S21_M_INF) {
    res = 0;
  } else if (base <= -S21_M_INF && (exp >= S21_M_INF || (int)exp != exp)) {
    res = S21_M_INF;
  } else if ((int)exp == exp) {
    if (exp < 0) {
      base = 1. / base;
      exp *= -1;
    }
    for (int i = 0; i < exp; i++) {
      res *= base;
    }
  } else {
    res = s21_exp(exp * s21_log(base));
  }
  return res;
}

long double s21_sqrt(double x) {
  if (x != x || x >= S21_M_INF || x == 0) {
    x = x;
  } else if (x > 0) {
    x = s21_exp(0.5 * s21_log(x));
  } else {
    x = 0.0 / 0.0;
  }
  return x;
}

long double s21_exp(double x) {
  if (x >= S21_M_INF || x <= -S21_M_INF || x != x) {
    x = x == -S21_M_INF ? 0 : x;
  } else {
    long double sum = 1;
    long double last_sum = -1;
    for (int n = 1; s21_fabs(sum - last_sum) >= S21_M_EPS; n++) {
      long double mult = 1;
      last_sum = sum;
      for (int i = 1; i <= n; i++) {
        mult *= s21_fabs(x) / i;
      }
      sum += mult;
    }
    if (x >= 0) {
      x = sum;
    } else {
      x = 1 / sum;
    }
  }
  return x;
}

long double s21_log(double x) {
  if (x >= S21_M_INF) {
    x = 1. / 0.;
  } else if (x == 0) {
    x = -1.0 / 0.0;
  } else if (x < 0 || x != x || x <= -S21_M_INF) {  // -
    x = 0.0 / 0.0;
  } else if (x < 1) {
    long double sum = 0;
    long double last_sum = -1;
    for (int n = 0; sum - last_sum >= S21_M_EPS * S21_M_EPS; n++) {
      long double y = 1;
      for (int i = 1; i <= n; i++) {
        y *= ((x - 1) * (x - 1)) / ((x + 1) * (x + 1));
      }
      last_sum = sum;
      sum += y / (2 * n + 1);
    }
    x = sum * ((2 * (x - 1))) / (x + 1);
  } else if (x >= 1) {
    long double yn = 0;
    long double last_yn = -1;
    for (int n = 0; yn - last_yn >= S21_M_EPS * S21_M_EPS; n++) {
      last_yn = yn;
      yn += 2 * ((x - s21_exp(yn)) / (x + s21_exp(yn)));
    }
    x = yn;
  }
  return x;
}

long double s21_round(double x) {
  if (s21_fmod((x * 10), 10) > 4) {
    x = (int)x + 1;
  } else if (s21_fmod((x * 10), 10) == 4) {
    x = s21_round(x);
  } else {
    x = (int)x;
  }
  return x;
}

long double s21_cos(double x) {
  if (x == S21_M_INF || x == -S21_M_INF) {
    x = 0.0 / 0.0;
  } else if (x == S21_M_PI / 2 || x == -S21_M_PI / 2) {
    x = 0;
  } else if (x == 3 * S21_M_PI / 2 || x == -(3 * S21_M_PI) / 2) {
    x = 0;
  } else if (x == S21_M_PI || x == -S21_M_PI) {
    x = -1;
  } else if (x == 0 || x == 2 * S21_M_PI || x == -2 * S21_M_PI) {
    x = 1;
  } else {
    x = s21_fmod(x, 2 * S21_M_PI);
    if (x > S21_M_PI) {
      x -= 2 * S21_M_PI;
      x *= -1;
    } else if (x < -S21_M_PI) {
      x += 2 * S21_M_PI;
      x *= -1;
    }

    long double sum = 0;
    long double last_sum = -1;
    for (int i = 0; s21_fabs(sum - last_sum) >= S21_M_EPS; i++) {
      last_sum = sum;
      sum += (s21_pow(-1, i) * s21_pow(x, 2 * i)) / s21_factorial(2 * i);
    }
    x = sum;
  }
  return x;
}

long double s21_sin(double x) {
  if (x == S21_M_INF || x == -S21_M_INF) {
    x = 0.0 / 0.0;
  } else if (x == 0 || x == -2 * S21_M_PI || x == 2 * S21_M_PI) {
    x = 0;
  } else if (x == -S21_M_PI || x == S21_M_PI) {
    x = 0;
  } else if (x == S21_M_PI / 2 || x == -(3 * S21_M_PI) / 2) {
    x = 1;
  } else if (x == -S21_M_PI / 2 || x == 3 * S21_M_PI / 2) {
    x = -1;
  } else {
    x = s21_fmod(x, 2 * S21_M_PI);
    if (x > S21_M_PI) {
      x -= S21_M_PI;
      x *= -1;
    } else if (x < -S21_M_PI) {
      x += S21_M_PI;
      x *= -1;
    }
    long double sum = 0;
    long double last_sum = -1;
    for (int i = 0; s21_fabs(sum - last_sum) >= S21_M_EPS; i++) {
      last_sum = sum;
      sum +=
          (s21_pow(-1, i) * s21_pow(x, 2 * i + 1)) / s21_factorial(2 * i + 1);
    }
    x = sum;
  }
  return x;
}

long double s21_acos(double x) {
  if (x >= 0 && x <= 1) {
    x = s21_atan(s21_sqrt(1 - x * x) / x);
  } else if (x >= -1 && x < 0) {
    x = S21_M_PI + s21_atan(s21_sqrt(1 - x * x) / x);
  } else {
    x = 0.0 / 0.0;
  }
  return x;
}

long double s21_asin(double x) {
  if (x >= -1 && x <= 1) {
    x = s21_atan(x / (s21_sqrt(1 - x * x)));
  } else {
    x = 0.0 / 0.0;
  }
  return x;
}

long double s21_tan(double x) { return s21_sin(x) / s21_cos(x); }

long double s21_atan(double x) {
  long double y = 0;
  if (x == 0. / 0. || x == -0. / 0.) {
    y = x;
  } else if (x != x) {
    y = 0. / 0.;
  } else {
    y = x == 0. / 0. ? 0. / 0. : 0;
    y = (x < 1 && x > -1) ? s21_atan1(x) : y;
    y = x == 1 ? S21_M_PI / 4 : x == -1 ? -S21_M_PI / 4 : x == 0 ? 0 : y;
    y = x > 1    ? S21_M_PI / 2 - s21_atan1(1 / x)
        : x < -1 ? -S21_M_PI / 2 - s21_atan1(1 / x)
                 : y;
  }
  return y;
}

long double s21_atan1(double x) {
  long double rez = x, y = x, i = 1;
  while (s21_fabs(rez) > S21_M_EPS) {
    rez = -1 * rez * x * x * (2 * i - 1) / (2 * i + 1);
    i += 1;
    y += rez;
  }
  return y;
}