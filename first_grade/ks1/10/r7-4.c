/* 23 豊島圭吾
 * 第10回レポート プログラム5
 */

#include <stdio.h>
#include <string.h>

int main(void) {
  char a[] = "TAKUMA", b[100];
  strcpy(b, a);

  printf("a: %s\n", a);
  printf("b: %s\n", b);

  return 0;
}

/* 実行結果 23 豊島圭吾
a: TAKUMA
b: TAKUMA
*/
