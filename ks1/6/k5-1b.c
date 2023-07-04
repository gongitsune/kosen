/* 23 豊島圭吾
 * 課題集第6回 プログラム2
 */

#include <stdio.h>

int main(void) {
  int n, i;
  printf("n = ");
  scanf("%d", &n);
  int d[n];

  for (i = 0; i < n; i++) {
    scanf("%d", &d[i]);
  }
  printf("\n");

  for (i = 1; i < n; i++) {
    printf("%d\n", d[i] - d[i - 1]);
  }

  return 0;
}

/* 実行結果 23 豊島圭吾
n = 5
1
3
2
6
8

2
-1
4
2
 */
