/* 23 豊島圭吾
 * 第3回レポート プログラム4
 */

#include <stdio.h>

int main(void) {
  double h, w;
  scanf("%lf %lf", &h, &w);

  printf("身長 = %.3lf m\n", h);
  printf("体重 = %.3lf kg\n", w);

  double d = h * h * 22;
  if (w > d * 1.2) {
    printf("太りすぎです.\n");
  } else if (w < d * 0.8) {
    printf("瘦せすぎです.\n");
  } else {
    printf("標準です.\n");
  }

  return 0;
}

/* 実行結果 23 豊島圭吾
1.74 81.5
身長 = 1.740 m
体重 = 81.500 kg
太りすぎです.
 */
