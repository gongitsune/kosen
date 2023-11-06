/* 23 豊島圭吾
 * 第10回レポート プログラム3
 */

#include <stdio.h>

int main(void) {
  char c;
  int cnt_large = 0, cnt_small = 0, cnt_num = 0;
  while (scanf("%c", &c) != EOF) {
    if (c >= 0x61 && c <= 0x7A)
      cnt_small++;
    else if (c >= 0x41 && c <= 0x5A)
      cnt_large++;
    else if (c >= 0x30 && c <= 0x39)
      cnt_num++;
  }

  printf("英大文字 = %d\n", cnt_large);
  printf("英小文字 = %d\n", cnt_small);
  printf("数字     = %d\n", cnt_num);

  return 0;
}

/* 実行結果
英大文字 = 233
英小文字 = 11949
数字     = 0
*/
