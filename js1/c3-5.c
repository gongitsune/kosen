/* 23 豊島圭吾
 * 第3回レポート 挑戦的課題プログラム5
 */

#include <stdio.h>

int gcm(int a, int b) {
  int x = a, y = b;

  int r = -1;
  while (r != 0) {
    r = x % y;
    x = y;
    y = r;
  }

  return x;
}

int main(void) {
  int a, b, c;
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("c = ");
  scanf("%d", &c);

  printf("gcm = %d\n", gcm(gcm(a, b), c));

  return 0;
}

/* 実行結果
a = 5
b = 10
c = 20
gcm = 5
 */
