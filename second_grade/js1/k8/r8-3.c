/* 23 豊島圭吾
 * レポート8 プログラム3
 */

#include <stdio.h>

int gcm(int x, int y);

int main(void) {
  int a, b;
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);

  printf("gcm(%d, %d) = %d\n", a, b, gcm(a, b));

  return 0;
}

int gcm(int x, int y) {
  int r = -1;
  while (r != 0) {
    r = x % y;
    x = y;
    y = r;
  }

  return x;
}

/* 実行結果
a = 12
b = 18
gcm(12, 18) = 6
*/
