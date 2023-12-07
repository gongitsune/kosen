/* 23 豊島圭吾
 * 第10回レポート プログラム3
 */

#include <stdio.h>
#include <string.h>

int main(void) {
  char a[100], b[100];
  scanf("%s%s", a, b);

  int c = strcmp(a, b);
  if (c < 0)
    printf("%s > %s\n", a, b);
  else if (c > 0)
    printf("%s < %s\n", a, b);
  else
    printf("%s = %s\n", a, b);

  return 0;
}

/* 実行結果 23 豊島圭吾
ABC ABB
ABC < ABB

ABC ABC
ABC = ABC
*/
