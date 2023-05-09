/* 23 豊島圭吾
 * 第3回レポート 挑戦的課題プログラム1
 */

#include <stdio.h>

int main(void) {
  int y, m, d;
  scanf("%d %d %d", &y, &m, &d);

  if (m <= 2) {
    y--;
    m += 12;
  }

  int day = (y + (y / 4) - (y / 100) + (y / 400) + (13 * m + 8) / 5 + d) % 7;
  switch (day) {
  case 0:
    printf("Sunday\n");
    break;
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  default:
    printf("Saturday\n");
    break;
  }

  return 0;
}
