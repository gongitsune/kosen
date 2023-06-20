/* 23 豊島圭吾
 * 第五回挑戦的課題 プログラミング2
 */

#include <stdbool.h>
#include <stdio.h>

bool is_leap(int year) {
  if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0) {
    return false;
  }
  return true;
}

int main(void) {
  int y0, m0, d0, y1, m1, d1;
  printf("From: ");
  scanf("%d %d %d", &y0, &m0, &d0);
  printf("To: ");
  scanf("%d %d %d", &y1, &m1, &d1);

  int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  // fromからy0年の12/31までの日数
  int i;
  int first = days[m0 - 1] - d0;
  for (i = m0; i < 11; i++) {
    first += days[i];
    if (i == 1 && is_leap(y0)) {
      first++;
    }
  }

  // y0 + 1年の1/1からy1年の12/31までの日数
  int second = 0, y;
  for (y = y0 + 1; y <= y1; y++) {
    second += 365;
    if (is_leap(y))
      second++;
  }

  // toからy1年の12/31までの日数
  int third = days[m1 - 1] - d1;
  for (i = m1; i < 11; i++) {
    third += days[i];
    if (i == 1 && is_leap(y1))
      third++;
  }

  printf("%d %d %d\n", first, second, third);
  printf("%d日\n", first + second - third);

  return 0;
}

/* 実行結果
From: 2000 3 1
To: 2004 4 19
274 1461 225
1510日
 */
