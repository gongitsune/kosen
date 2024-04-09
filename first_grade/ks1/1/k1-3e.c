/* 23 豊島圭吾
 * 第2回レポート プログラム5
 */

#include <stdio.h>

int main(void) {
  double r1, r2;
  scanf("%lf %lf", &r1, &r2);
  printf("R1       = %.3lf Ω\n", r1);
  printf("R2       = %.3lf Ω\n", r2);
  printf("合成抵抗 = %.3lf Ω\n", r1 * r2 / (r1 + r2)); 

  return 0;
}

/* 実行結果 豊島圭吾
20.0 40.0
R1       = 20.000 Ω
R2       = 40.000 Ω
合成抵抗 = 13.333 Ω
 */
