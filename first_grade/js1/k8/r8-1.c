/*  23 豊島圭吾
 *  レポート8回目 プログラム1
 */

#include <stdio.h>

int leap(int x);

int main(void) {
  int year;
  printf("year = ");
  scanf("%d", &year);
  if (leap(year)) {
    printf("%d 年は閏年です\n", year);
  } else {
    printf("%d 年は閏年ではない\n", year);
  }

  return 0;
}

int leap(int x) { return (x % 4 == 0 && x % 100 != 0) || x % 400 == 0; }

/* 実行結果
year = 1998
1998 年は閏年ではない

year = 2000
2000 年は閏年です
*/
