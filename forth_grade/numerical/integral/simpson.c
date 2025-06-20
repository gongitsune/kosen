#include <math.h>
#include <stdio.h>

double func(double x) { return pow(x, 4.0) + 2.0 * x; }

int main(void) {
  double xa = 0.0, xb = 3.0; // 積分範囲

  for (int n = 2; n <= 60; n += 2) {
    double y[n + 1];
    double h = (xb - xa) / n; // 刻み幅

    // データ作成
    for (int i = 0; i <= n; i++) {
      y[i] = func(xa + h * i);
    }

    double s = y[0];
    // 係数が4の項だけ足す
    for (int i = 1; i < n; i += 2) {
      s += 4.0 * y[i];
    }
    // 係数が2の項だけ足す
    for (int i = 2; i < n - 1; i += 2) {
      s += 2.0 * y[i];
    }
    s += y[n];
    s *= h / 3.0;

    printf("%d %f\n", n, s);
  }
  return 0;
}
