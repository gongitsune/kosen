/* 23 豊島圭吾
 * 第9回レポート プログラム8
 */

#include <stdio.h>

int souwa(int n);

int main(void) {
  int n;
  scanf("%d", &n);
  printf("n = %d s = %d\n", n, souwa(n));
}

int souwa(int n) {
  int i, s = 0;
  for (i = 1; i <= n; i++) {
    s += i;
  }
  return s;
}

/* 実行結果 23 豊島圭吾
3
n = 3 s = 6
*/
