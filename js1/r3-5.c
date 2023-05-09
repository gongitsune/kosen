/* 23 豊島圭吾
 * 第3回レポート プログラム5
 */

#include <stdio.h>

int main(void) {
  int x, y;
  printf("x = ");
  scanf("%d", &x);
  printf("y = ");
  scanf("%d", &y);

  int r = -1;
  while (r != 0) {
    r = x % y;
    x = y;
    y = r;
  }

  printf("gcm = %d\n", x);

  return 0;
}

/* 実行結果
x = 15438
y = 3510
gcm = 6
 */
