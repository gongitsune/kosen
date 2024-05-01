/* 23 豊島圭吾
 * 第10回レポート プログラム2
 */

#include <stdio.h>
#include <string.h>

int main(void) {
  char a[100], b[100];
  scanf("%s%s", a, b);

  strcat(a, b);
  strcat(a, b);
  printf("%s\n", a);

  return 0;
}

/* 実行結果 23 豊島圭吾
ABC 12345
ABC1234512345
*/
