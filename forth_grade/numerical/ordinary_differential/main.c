#include <math.h>
#include <stdio.h>

#define EPS 1e-4

double func_f1(double, double, double);
double func_f2(double, double, double);

int main(void) {
  double x = 0, y = 3, z = 4; // 初期条件 x = 0のとき
  const double h = 0.005;     // 刻み幅
  const double h2 = h / 2.0;
  const double dx = 0.2;  // 打ち出し幅
  double ddx = 0;         // 次の打ち出し
  const double x_max = 2; // 打ち切り

  printf("%5s %10s %10s %10s %10s\n", "X", "Y", "RY", "Z", "RZ");
  do {
    // 打ち出し
    if (x >= ddx - EPS) {
      ddx += dx;
      double ry = exp(2 * x) + 2 * exp(x);
      double rz = 2 * exp(2 * x) + 2 * exp(x);
      printf("%10.4lf %10.4lf %10.4lf %10.4lf %10.4lf\n", x, y, ry, z, rz);
    }

    const double b11 = func_f1(x, y, z);
    const double b21 = func_f2(x, y, z);

    const double b12 = func_f1(x + h2, y + b11 * h2, z + b21 * h2);
    const double b22 = func_f2(x + h2, y + b11 * h2, z + b21 * h2);

    const double b13 = func_f1(x + h2, y + b12 * h2, z + b22 * h2);
    const double b23 = func_f2(x + h2, y + b12 * h2, z + b22 * h2);

    const double b14 = func_f1(x + h, y + b13 * h, z + b23 * h);
    const double b24 = func_f2(x + h, y + b13 * h, z + b23 * h);

    x += h;
    y += (h / 6.0) * (b11 + 2 * b12 + 2 * b13 + b14);
    z += (h / 6.0) * (b21 + 2 * b22 + 2 * b23 + b24);
  } while (x <= x_max + EPS);

  return 0;
}

double func_f1(double x, double y, double z) { return z; }

double func_f2(double x, double y, double z) { return 3 * z - 2 * y; }
