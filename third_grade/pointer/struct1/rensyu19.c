#include <stdio.h>

struct complx {
  double re;
  double im;
};
typedef struct complx COMPLX;

int main(void) {
  COMPLX a, b, add, mul;

  scanf("%lf%lf", &a.re, &a.im);
  scanf("%lf%lf", &b.re, &b.im);

  add.re = a.re + b.re;
  add.im = a.im + b.im;
  mul.re = a.re * b.re - a.im * b.im;
  mul.im = a.re * b.im + a.im * b.re;

  printf("加算 = %.1f + %.1f i\n", add.re, add.im);
  printf("乗算 = %.1f + %.1f i\n", mul.re, mul.im);

  return 0;
}