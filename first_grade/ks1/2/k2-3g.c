/* 23 豊島圭吾
 * 第3回レポート プログラム9
 */

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("A = %d\n", a);
  printf("B = %d\n", b);

  switch ((a - b + 3) % 3) {
  case 2:
    printf("Aの勝ち.\n");
    break;
  case 1:
    printf("Bの勝ち.\n");
    break;
  case 0:
    printf("引き分け\n");
    break;
  }

  return 0;
}

/* 実行結果 23 豊島圭吾
0 1
A = 0
B = 1
Aの勝ち.
 */
