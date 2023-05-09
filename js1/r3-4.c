/* 23 豊島圭吾
 * 第3回レポート プログラム4
 */

#include <stdio.h>

int main(void) {
  int n = 0;
  printf("n = ");
  scanf("%d", &n);

  int i;
  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      printf("素数ではない(約数%d)\n", i);
      return 0;
    }
  }
  printf("素数\n");

  return 0;
}

/* 実行結果
n = 111
素数ではない(約数3)
 */
