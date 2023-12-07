/* 23 豊島圭吾
 * 第10回レポート プログラム4
 */

#include <stdio.h>
#include <string.h>

int main(void) {
  char a[100], b[100];
  scanf("%s%s", a, b);

  int c = strcmp(a, b);
  if (c <= 0) {
    strcat(a, b);
    printf("%s\n", a);
    printf("%d 文字\n", (int)strlen(a));
  } else if (c > 0) {
    strcat(b, a);
    printf("%s\n", b);
    printf("%d 文字\n", (int)strlen(b));
  }

  return 0;
}

/* 実行結果 23 豊島圭吾
ABC ADF
ABCADF
6 文字

ABC AADF
AADFABC
7 文字
*/
