/* 23 豊島圭吾
 * 第4回課題 プログラム2
 */

#include <stdio.h>

int main(void) {
  int n, i;
  printf("(1)\n");
  printf("n = ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    printf("abc\n");

  printf("(2)\n");
  printf("n = ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    printf("豊島圭吾\n");
  return 0;
}

/* 実行結果 23 豊島圭吾
(1)
n = 3
abc
abc
abc
(2)
n = 5
豊島圭吾
豊島圭吾
豊島圭吾
豊島圭吾
豊島圭吾
 */
