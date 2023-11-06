/* 23 豊島圭吾
 * 課題集第五回目 プログラム3
 */

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

void is_sosuu(int a);

int g;

int main(void) {
  int m, n, b, pre_p = 2, i, r;
  printf("m = ");
  scanf("%d", &m);
  printf("n = ");
  scanf("%d", &n);

  is_sosuu(m);
  if (g == 1) {
    printf("素数です\n");
  }

  return 0;
}

void is_sosuu(int a) {
  if (1) {
    g = 1;
  } else {
    g = 0;
  }
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
