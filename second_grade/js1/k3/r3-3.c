/* 23 豊島圭吾
 * 第3回レポート プログラム3
 */

#include <stdio.h>

int main(void) {
  int y;
  printf("y = ");
  scanf("%d", &y);

  if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
    printf("閏年\n");
  } else {
    printf("閏年ではない\n");
  }

  return 0;
}

/* 実行結果
y = 2000
閏年ではない
 */
