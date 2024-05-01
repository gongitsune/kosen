/* 23 豊島圭吾
 * 第2回レポート プログラム3
 */

#include <stdio.h>

int main(void) {
  double r, h;
  scanf("%lf %lf", &r, &h);
  printf("半径 = %.1lf\n", r);
  printf("高さ = %.1lf\n", h);
  printf("体積 = %.1lf\n", 3.1416 * r * r * h);

  return 0;
}

/* 実行結果 豊島圭吾
2.0 3.0
半径 = 2.0
高さ = 3.0
体積 = 37.7
 */
