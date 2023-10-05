/* 23 豊島圭吾
 * レポート8 プログラム4
 */

#include <stdio.h>

int gcm(int x, int y);
int lcm(int x, int y);

int main(void) {
  int a, b;
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);

  printf("lcm(%d, %d) = %d\n", a, b, lcm(a, b));

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

int lcm(int x, int y) { return x * y / gcm(x, y); }

/* 実行結果
a = 12
b = 18
lcm(12, 18) = 36

*/
