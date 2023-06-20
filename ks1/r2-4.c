/* 23 豊島圭吾
 * 第3回レポート プログラム7
 */

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  printf("a = %d\n", a);
  printf("b = %d\n", b);

  int ans = a + b;
  printf("a + b = ");
  if (ans >= 3) {
    printf("1%d\n", ans - 3);
  } else {
    printf("%d\n", ans);
  }

  return 0;
}

/* 実行結果 23豊島圭吾
2 1
a = 2
b = 1
a + b = 10
 */
