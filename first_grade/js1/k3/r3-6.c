/* 23 豊島圭吾
 * 第3回レポート プログラム6
 */

#include <math.h>
#include <stdio.h>

int main(void) {
  int n, a;
  printf("(1)");
  a = 1;
  for (n = 1; n <= 10; n++) {
    printf(" %d", a);
    a += 2;
  }
  printf("\n");

  printf("(2)");
  a = 0;
  for (n = 1; n <= 10; n++) {
    printf(" %d", a);
    a += 2 * n;
  }
  printf("\n");

  printf("(3)");
  a = 1;
  for (n = 1; n <= 10; n++) {
    printf(" %d", a);
    a += 2 * n + 1;
  }
  printf("\n");

  printf("(4)");
  a = 1;
  for (n = 1; n <= 10; n++) {
    printf(" %d", a);
    a += 4 * n + 2;
  }
  printf("\n");

  return 0;
}

/* 実行結果
(1) 1 3 5 7 9 11 13 15 17 19
(2) 0 2 6 12 20 30 42 56 72 90
(3) 1 4 9 16 25 36 49 64 81 100
(4) 1 7 17 31 49 71 97 127 161 199
 */
