/* 23 豊島圭吾
 * 第15回課題 プログラム2
 */

#include <stdio.h>

int power(int a, int b);

int main(void) {
  int a, b;
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);

  printf("%d ^ %d = %d\n", a, b, power(a, b));

  return 0;
}

int power(int a, int b) {
  if (b == 0)
    return 1;
  if (b == 1)
    return a;
  return a * power(a, b - 1);
}

/* 実行結果
a = 2
b = 10
2 ^ 10 = 1024
*/
