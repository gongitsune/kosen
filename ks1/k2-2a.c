/* 23 豊島圭吾
 * 第3回レポート プログラム3
 */

#include <stdio.h>

int main(void) {
  int d;
  scanf("%d", &d);

  int m;
  if (d < 100) {
    m = 8 * d + 1000;
  } else if (d < 200) {
    m = 4 * d + 1400;
  } else if (d < 500) {
    m = 2 * d + 1800;
  } else {
    m = d + 2300;
  }

  printf("距離 = %d km\n", d);
  printf("料金 = %d 円\n", m);

  return 0;
}

/* 実行結果 23 豊島圭吾
600
距離 = 600 km
料金 = 2900 円
 */
