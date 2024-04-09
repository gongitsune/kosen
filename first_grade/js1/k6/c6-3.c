/* 23 豊島圭吾
 * 挑戦的課題第6回 プログラム3
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

bool compare(int a, int b, int *cnt) {
  *cnt += 1;
  return a > b;
}

int main(void) {
  int a[10], i, r, x, j, exchange_cnt = 0;

  srand((unsigned int)time(NULL));

  for (i = 0; i < 100; i++) {
    for (r = 0; r < 10; r++) {
      a[r] = rand();
    }
    for (r = 1; r < 10; r++) {
      j = r;
      x = a[j];
      while (j > 0 && x > a[j - 1]) {
        exchange_cnt++;
        a[j] = a[j - 1];
        j--;
      }
      a[j] = x;
    }
  }
  printf("average count: %lf\n", exchange_cnt / 100.);

  return 0;
}

/* 実行結果
average count: 23.170000
 */
