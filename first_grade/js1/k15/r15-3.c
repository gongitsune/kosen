/* 23 豊島圭吾
 * 第15回課題 プログラム3
 */

#include <stdio.h>

int gcm(int a, int b);

int main(void) {
  int a, b;
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);

  printf("gcm %d %d = %d\n", a, b, gcm(a, b));

  return 0;
}

int gcm(int a, int b) {
  if (b == 0)
    return a;
  return gcm(b, a % b);
}

/* 実行結果
a = 2
b = 10
2 ^ 10 = 1024
*/
