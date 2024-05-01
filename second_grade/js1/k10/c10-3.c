/* 23 豊島圭吾
 * 第10回挑戦的課題 プログラム3
 */

#include <stdio.h>

int main(void) {
  char c;
  int is_space = 0;
  while (scanf("%c", &c) != EOF) {
    if (c == ' ') {
      if (is_space == 0) {
        printf(" ");
      }
      is_space = 1;
    } else {
      is_space = 0;
      printf("%c", c);
    }
  }

  return 0;
}

/* 実行結果
1       2   3 456       78  9
1 2 3 456 78 9
*/
