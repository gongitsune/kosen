/* 23 豊島圭吾
 * 第3回レポート プログラム11
 */

#include <stdio.h>

void print_num(int n, int d) {
  if (n != 0) {
    print_num(n / d, d);
    printf("%d", n % d);
  }
}

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  printf("a + b = ");
  print_num(a + b, 4);
  printf("\n");

  return 0;
}

/* 実行結果 23 豊島圭吾
2 2
a = 2
b = 2
a + b = 10
 */
