/* 23 豊島圭吾
 * 第15回課題 プログラム4
 */

#include <stdio.h>

int fibo(int n);

int main(void) {
  int n;
  printf("n = ");
  scanf("%d", &n);

  printf("fibo %d = %d\n", n, fibo(n));
  return 0;
}

int fibo(int n) {
  if (n == 0 || n == 1)
    return 1;
  return fibo(n - 1) + fibo(n - 2);
}

/* 実行結果
n = 4
fibo 4 = 5
*/
