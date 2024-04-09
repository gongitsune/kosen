/* 23 豊島圭吾
 * 第9回レポート プログラム3
 */

#include <math.h>
#include <stdio.h>

double v_entou(double hankei, double takasa);

int main(void) {
  double r, h;
  scanf("%lf %lf", &r, &h);
  printf("半径 = %.1lf\n", r);
  printf("高さ = %.1lf\n", h);

  printf("体積 = %.1f\n", v_entou(r, h));
}

double v_entou(double hankei, double takasa) {
  return hankei * hankei * M_PI * takasa;
}

/* 実行結果 23 豊島圭吾
2.0 3.0
半径 = 2.0
高さ = 3.0
体積 = 37.7
*/
