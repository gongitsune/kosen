/* 23 豊島圭吾
 * 第3回レポート 挑戦的課題プログラム3
 */

#include <stdio.h>

int print_char(char *s, int length) {
  int i;
  for (i = 0; i < length; i++)
    printf("%s", s);

  return 0;
}

int main(void) {
  int n;
  printf("n = ");
  scanf("%d", &n);

  int i;
  for (i = 0; i < n / 2 + 1; i++) {
    print_char(" ", (n - i * 2) / 2);
    print_char("*", i * 2 + 1);
    print_char(" ", (n - i * 2) / 2);

    printf("\n");
  }

  return 0;
}

/* 実行結果
n = 7
   *
  ***
 *****
*******
 */
