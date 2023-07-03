/* 23 豊島圭吾
 * 課題集第五回 プログラム5
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

  int cnt = 0, i, r;
  bool prime;
  for (i = m; cnt != n; i++) {
    prime = i != 1;
    for (r = 2; r <= sqrt(i); r++) {
      if (i % r == 0) {
        prime = false;
        break;
      }
    }

    if (prime) {
      printf("%d\n", i);
      cnt++;
    }
  }

  return 0;
}

/* 実行結果 23 豊島圭吾
m = 1000
n = 10
1009
1013
1019
1021
1031
1033
1039
1049
1051
1061
 */
