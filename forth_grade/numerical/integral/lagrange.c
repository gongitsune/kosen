#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double func(double x) { return pow(x, 4.0) + 2.0 * x; }
double lagrange(int n, double *x, double *y, double xx);

int main(void) {
  const int N = 30;
  const int LAG_N = 6;

  double y[N + 1], x[N + 1];
  double xa = 0.0, xb = 3.0; // 積分範囲
  double h = (xb - xa) / N;  // 刻み

  // データ作成
  for (int i = 0; i <= N; i++) {
    y[i] = func(xa + h * i);
    x[i] = h * i;
  }

  double lag_h = (xb - xa) / (N * LAG_N);
  double s = y[0];
  for (int i = 1; i < N; i++) {
    for (int k = 0; k < LAG_N; k++) {
      s += 2.0 * lagrange(LAG_N, x, y, xa + lag_h * (i * k));
    }
  }
  s += y[N];
  s *= lag_h / 2.0;

  printf("%f\n", s);
  return 0;
}

double lagrange(int n, double *x, double *y, double xx) {
  double *z = malloc(sizeof(double) * n);
  double yy = 0.0;

  for (int k = 0; k < n; k++) {
    z[k] = 0.0;
    for (int i = 0; i < n; i++) {
      if (i != k)
        z[k] = (xx - x[i]) / (x[k] - x[i]);
    }
    yy += y[k] * z[k];
  }
  free(z);
  return yy;
}
