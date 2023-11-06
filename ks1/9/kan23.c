/* 23 豊島圭吾
 * 第9回レポート プログラム5
 */

#include <stdio.h>

int and_gate(int a, int b);

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("x = %d\n", and_gate(a, b));

  return 0;
}

int and_gate(int a, int b) { return a & b; }

/* 実行結果 23 豊島圭吾
1 1
a = 1
b = 1
x = 1
 */
