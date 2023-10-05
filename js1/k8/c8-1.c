/* 23 豊島圭吾
 * 挑戦的課題8 プログラム1
 */

/* 半加算器シミュレータ */
#include <stdio.h>
int and (int a, int b);
int or (int a, int b);
int not(int a);
int main(void) {
  int a, b, sum, carry;
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  sum = or (and(not(a), b), and(a, not(b)));
  carry = and(a, b);
  printf("半加算器\n");
  printf("sum = %d carry= %d\n", sum, carry);
  return 0;
}
int and (int a, int b) { return a * b; }
int or (int a, int b) { return a + b - a * b; }
int not(int a) { return 1 - a; }

/* 実行結果
a = 0
b = 0
半加算器
sum = 0 carry= 0

a = 0
b = 1
半加算器
sum = 1 carry= 0

a = 1
b = 0
半加算器
sum = 1 carry= 0

a = 1
b = 1
半加算器
sum = 0 carry= 1
*/
