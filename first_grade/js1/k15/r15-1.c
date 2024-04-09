/* 23 豊島圭吾
 * 第15回課題 プログラム1
 */

#include <stdio.h>
int fact(int n);

int main(void) {
  int n;
  printf("n = ");
  scanf("%d", &n);

  printf("%d! = %d\n", n, fact(n));

  return 0;
}

int fact(int n) {
  if (n == 0)
    return 1;
  return n * fact(n - 1);
}

/* 実行結果
n = 4
4! = 24
*/
