/* 23 豊島圭吾
 * 第9回レポート プログラム4
 */

#include <stdio.h>

double hyoujun(double sincho);

int main(void) {
  double h, w;
  scanf("%lf %lf", &h, &w);

  printf("身長 = %.3lf m\n", h);
  printf("体重 = %.3lf kg\n", w);

  if (w > hyoujun(h)) {
    printf("太りすぎです.\n");
  } else {
    printf("太りすぎではありません.\n");
  }

  return 0;
}

double hyoujun(double sincho) { return sincho * sincho * 22.0 * 1.2; }

/* 実行結果 23 豊島圭吾
1.65 65.0
身長 = 1.650 m
体重 = 65.000 kg
太りすぎではありません.
 */
