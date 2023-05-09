/* 23 豊島圭吾
 * 第2回レポート プログラム5
 */

#include <stdio.h>

int main(void) {
  double top_w, under_w, h;
  scanf("%lf %lf %lf", &top_w, &under_w, &h);
  printf("上底 = %.1lf\n", top_w);
  printf("下底 = %.1lf\n", under_w);
  printf("高さ = %.1lf\n", h);
  printf("面積 = %.1lf\n", (top_w + under_w) * h / 2.0);
	
  return 0;
}


/* 実行結果 豊島圭吾
2.0 3.0 4.0
上底 = 2.0
下底 = 3.0
高さ = 4.0
面積 = 10.0
 */
