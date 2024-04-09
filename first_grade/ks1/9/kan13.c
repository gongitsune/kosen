/* 23 豊島圭吾
 * 第9回レポート プログラム1
 */

#include <stdio.h>

double s_sankaku(double teihen, double takasa);

int main(void) {
  double h, w;
  scanf("%lf %lf", &h, &w);
  printf("高さ       = %.1lf\n", h);
  printf("底辺の長さ = %.1lf\n", w);
  printf("面積       = %.1lf\n", s_sankaku(w, h));

  return 0;
}

double s_sankaku(double teihen, double takasa) { return teihen * takasa / 2; }

/* 実行結果 23 豊島圭吾
5
10
高さ       = 5.0
底辺の長さ = 10.0
面積       = 25.0
*/
