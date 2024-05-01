/* 23 豊島圭吾
 * 課題集第6回 プログラム2
 */

#include <stdio.h>

int main(void) {
  int n, i;
  printf("n = ");
  scanf("%d", &n);
  double d[n];

  for (i = 0; i < n; i++) {
    scanf("%lf", &d[i]);
  }
  printf("\n");

  for (i = n; i > 0; i--) {
    printf("%.1f\n", d[i - 1]);
  }

  return 0;
}

/* 実行結果 23 豊島圭吾
n = 5
1.0
3.0
2.0
6.0
8.0

8.0
6.0
2.0
3.0
1.0
 */
