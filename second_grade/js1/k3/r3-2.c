/* 23 豊島圭吾
 * 第3回レポート プログラム2
 */

#include <math.h>
#include <stdio.h>

int main(void) {
  double a, b, c;
  printf("a = ");
  scanf("%lf", &a);
  printf("b = ");
  scanf("%lf", &b);
  printf("c = ");
  scanf("%lf", &c);

  double d = b * b - 4 * a * c;
  double double_a = 2 * a, sqrt_d = sqrt(d);
  if (d < 0) {
    printf("解なし\n");
  } else if (d == 0) {
    printf("x = %.2lf\n", (-b + sqrt_d) / double_a);
  } else {
    printf("x1 = %.2lf\n", (-b + sqrt_d) / double_a);
    printf("x2 = %.2lf\n", (-b - sqrt_d) / double_a);
  }

  return 0;
}

/* 実行結果
a = 1
b = 2
c = 1
x = -1.00

a = 1
b = 1
c = 1
解なし
 */
