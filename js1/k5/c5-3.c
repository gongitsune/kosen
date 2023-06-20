/* 23 豊島圭吾
 * 第5回挑戦的課題 プログラム3
 */

#include <stdio.h>

int calc_day(int y, int m, int d) {
  if (m <= 2) {
    y--;
    m += 12;
  }

  int day = (y + (y / 4) - (y / 100) + (y / 400) + (13 * m + 8) / 5 + d) % 7;

  return day;
}

int main(void) {
  int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int y, m;
  scanf("%d %d", &y, &m);

  int first_day = calc_day(y, m, 1);

  printf("    %4d年 %d月\n", y, m);
  printf("日 月 火 水 木 金 土\n");

  int i;
  for (i = 0; i < first_day; i++)
    printf("   ");

  for (i = 0; i < days[m - 1]; i++) {
    printf("%2d ", i + 1);
    if ((first_day + i + 1) % 7 == 0) {
      printf("\n");
    }
  }
  printf("\n");

  return 0;
}

/* 実行結果
2004 4
    2004年 4月
日 月 火 水 木 金 土
             1  2  3
 4  5  6  7  8  9 10
11 12 13 14 15 16 17
18 19 20 21 22 23 24
25 26 27 28 29 30
 */
