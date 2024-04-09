/* 23 豊島圭吾
 * レポート8回目 プログラム2
 */

#include <math.h>
#include <stdio.h>

int prime(int n);

int main(void) {
  int n;
  printf("n (>1) = ");
  scanf("%d", &n);

  int p = prime(n);
  if (p) {
    printf("%d は約数 %d を持つので素数ではない\n", n, p);
  } else {
    printf("%d は素数\n", n);
  }

  return 0;
}

int prime(int n) {
  int i;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return i;
    }
  }
  return 0;
}

/* 実行結果
n (>1) = 79
79 は素数

n (>1) = 403
403 は約数 13 を持つので素数ではない
*/
