#include <math.h>
#include <stdio.h>

double func(double x) { return pow(x, 4.0) + 2.0 * x; }

int main(void) {
  double xa = 0.0, xb = 3.0; // 積分範囲

  for (int n = 1; n <= 60; n++) {
    double y[n + 1];
    double h = (xb - xa) / n; // 刻み

    // データ作成
    for (int i = 0; i <= n; i++) {
      y[i] = func(xa + h * i);
    }

    double s = 0.0;
    for (int i = 1; i < n; i++) {
      s += 2.0 * y[i];
    }
    s = (h / 2.0) * (y[0] + s + y[n]);
    printf("%d %f\n", n, s);
  }

  return 0;
}
