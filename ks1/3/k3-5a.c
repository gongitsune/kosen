/* 23 豊島圭吾
 * 第4回課題 プログラム6
 */

#include <stdio.h>

int main(void) {
  int n, i, r;
  scanf("%d", &n);
  printf("n=%d\n", n);

  for (i = 0; i < n; i++) {
    for (r = 0; r < i; r++)
      printf(" ");
    printf("*\n");
  }

  return 0;
}

/* 実行結果 23 豊島圭吾
4
n=4
*
 *
  *
   *
 */
