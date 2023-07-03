/* 23 豊島圭吾
 * 第2回レポート プログラム4
 */

#include <stdio.h>

int main(void) {
  double h, w;
  scanf("%lf %lf", &h, &w);
  printf("高さ       = %.1lf\n", h);
  printf("底辺の長さ = %.1lf\n", w);
  printf("面積       = %.1lf\n", w * h / 2);
  return 0;
}


/* 実行結果 豊島圭吾
5.0 7.0
高さ       = 5.0
底辺の長さ = 7.0
面積       = 17.5 
 */
