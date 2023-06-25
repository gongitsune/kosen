/* 23 豊島圭吾
 * 第3回レポート 挑戦的課題プログラム4
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
  int a, b;
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);

  printf("lcm = %d\n", a * b / gcm(a, b));

  return 0;
}

/* 実行結果
a = 2
b = 20
lcm = 20
 */
