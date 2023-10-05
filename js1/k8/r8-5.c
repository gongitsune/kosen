/* 23 豊島圭吾
 * レポート8 プログラム5
 */

#include <stdio.h>

int gcm(int x, int y);
int gcm3(int x, int y, int z);

int main(void) {
  int a, b, c;
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("c = ");
  scanf("%d", &c);

  printf("gcm3(%d, %d, %d) = %d\n", a, b, c, gcm3(a, b, c));

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

int gcm3(int x, int y, int z) { return gcm(gcm(x, y), z); }

/* 実行結果
a = 12
b = 18
c = 30
gcm3(12, 18, 30) = 6
*/
