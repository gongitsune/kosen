/* 23 豊島圭吾
 * 課題集9回目 プログラム11
 */

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int is_sosuu(int a);

int main(void) {
  int m, n, b, pre_p = 2, i, r;
  printf("m = ");
  scanf("%d", &m);
  printf("n = ");
  scanf("%d", &n);

  for (i = m; i <= n; i++) {
    if (is_sosuu(i)) {
      if (i - pre_p == 2)
        printf("%5d %5d\n", pre_p, i);
      pre_p = i;
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
n = 11000
10007 10009
10037 10039
10067 10069
10091 10093
10139 10141
10271 10273
10301 10303
10331 10333
10427 10429
10457 10459
10499 10501
10529 10531
10709 10711
10859 10861
10889 10891
10937 10939
 */
