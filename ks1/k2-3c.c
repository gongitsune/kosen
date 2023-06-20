/* 23 豊島圭吾
 * 第3回レポート プログラム13
 */

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  if ((a & b) == 1) {
    printf("出る\n");
  } else {
    printf("出ない\n");
  }

  return 0;
}

/* 実行結果 23 豊島圭吾
0 0
a = 0
b = 0
出ない
 */
