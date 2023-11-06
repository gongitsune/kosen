/* 23 豊島圭吾
 * 課題集9回目 プログラム10
 */

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int m, n, i, r, b;
  printf("m = ");
  scanf("%d", &m);
  printf("n = ");
  scanf("%d", &n);

  for (i = m; i <= n; i++) {
    if (i != 1) {
      r = 2;
      b = sqrt(i);
      while (i % r != 0 && r <= b)
        r++;

      if (r > b) {
        printf("%d\n", i);
      }
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
