/* 23 豊島圭吾
 * 第10回レポート プログラム6
 */

#include <stdio.h>
#include <string.h>

int main(void) {
  char a[100], b[100];
  scanf("%s%s", a, b);

  int l = strlen(a);
  strcat(a, b);
  strncpy(b, a, l);
  strcat(a, b);

  printf("%s\n", a);

  return 0;
}

/* 実行結果 23 豊島圭吾
ABC 123
ABC123ABC
*/
