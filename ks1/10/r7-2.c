/* 23 豊島圭吾
 * 第10回レポート プログラム1
 */

#include <stdio.h>
#include <string.h>

int main(void) {
  char a[100], b[100];
  scanf("%s%s", a, b);

  strcat(a, b);
  printf("%s\n", a);

  int len = strlen(a);
  printf("%d 文字\n", len);

  return 0;
}

/* 実行結果 23 豊島圭吾
ABC DE
ABCDE
5 文字

Tak uma
Takuma
6 文字
*/
