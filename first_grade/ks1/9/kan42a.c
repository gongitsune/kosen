/* 23 豊島圭吾
 * 課題集9回目 プログラム10
 */

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int is_sosuu(int a);

int main(void) {
  int m, n, i;
  printf("m = ");
  scanf("%d", &m);
  printf("n = ");
  scanf("%d", &n);

  for (i = m; i <= n; i++) {
    if (is_sosuu(i)) {
      printf("%d\n", i);
    }
  }

  return 0;
}

int is_sosuu(int a) {
  int i, b;
  if (a == 1)
    return 0;

  i = 2;
  b = sqrt((double)a);
  while (((a % i) != 0) && (i <= b))
    i++;

  return i > b;
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
