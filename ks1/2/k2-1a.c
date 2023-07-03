/* 23 豊島圭吾
 * 第3回レポート プログラム2
 */

#include <stdio.h>

int main(void) {
  double h, w;
  scanf("%lf %lf", &h, &w);

  printf("身長 = %.3lf m\n", h);
  printf("体重 = %.3lf kg\n", w);

  if (w < h * h * 22.0 * 0.8) {
    printf("痩せすぎです.\n");
  } else {
    printf("瘦せすぎではありません.\n");
  }

  return 0;
}

/* 実行結果 23 豊島圭吾
1.65 50.0
身長 = 1.650 m
体重 = 50.000 kg
瘦せすぎではありません.
 */
