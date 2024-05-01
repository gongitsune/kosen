/* 23 豊島圭吾
 * 第11回課題プログラム3
 */

#include <stdio.h>

int main(void) {
  char s[100];
  int n = 0;

  printf("string = ");
  scanf("%s", s);

  while (s[n] != '\0') {
    n++;
  }

  printf("文字数 = %d\n", n);

  return 0;
}

/* 実行結果
employ
文字数 = 6
earth
文字数 = 5
*/
