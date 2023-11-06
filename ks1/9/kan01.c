/* 23 豊島圭吾
 * 第9回レポート プログラム2
 */

#include <stdio.h>

double taiseki(double takasa, double yokohaba, double okuyuki);

int main(void) {

  double x, y, z;
  printf("高さ = ");
  scanf("%lf", &y);
  printf("横幅 = ");
  scanf("%lf", &x);
  printf("奥行き = ");
  scanf("%lf", &z);

  printf("体積 = %.2f\n", taiseki(y, x, z));
}

double taiseki(double takasa, double yokohaba, double okuyuki) {
  return takasa * yokohaba * okuyuki;
}

/* 実行結果 23 豊島圭吾
高さ = 1.5
横幅 = 2.3
奥行き = 4.1
体積 = 14.14
*/
