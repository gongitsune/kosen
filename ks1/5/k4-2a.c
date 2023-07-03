/* 23 豊島圭吾
 * 課題集5回目 プログラム1
 */

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int m, n;
  printf("m = ");
  scanf("%d", &m);
  printf("n = ");
  scanf("%d", &n);

  int i, r;
  for (i = m; i <= n; i++) {
    bool prime = true;
    for (r = 2; r <= sqrt(i); r++) {
      if (i % r == 0) {
        prime = false;
        break;
      }
    }

    if (prime && i != 1) {
      printf("%d\n", i);
    }
  }

  return 0;
}

/* 実行結果 23 豊島圭吾
m = 10000
n = 10100
10007
10009
10037
10039
10061
10067
10069
10079
10091
10093
10099
 */
