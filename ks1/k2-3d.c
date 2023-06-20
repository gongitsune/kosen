/* 23 豊島圭吾
 * 第3回レポート プログラム8
 */

#include <stdio.h>

void print_num(int n) {
  if (n != 0) {
    print_num(n / 3);
    printf("%d", n % 3);
  }
}

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  printf("a = %d\n", a);
  printf("b = %d\n", b);

  printf("a * b = ");
  print_num(a * b);
  printf("\n");

  return 0;
}

/* 実行結果 23 豊島圭吾
2 2
a = 2
b = 2
a * b = 11
 */
