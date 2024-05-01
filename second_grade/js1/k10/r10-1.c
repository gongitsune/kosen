/* 23 豊島圭吾
 * 第10回レポート プログラム1
 */

#include <stdio.h>

int main(void) {
  char c;
  int cnt = 0;
  while (scanf("%c", &c) != EOF) {
    cnt++;
  }

  printf("文字数: %d\n", cnt);

  return 0;
}

/* 実行結果
文字数: 16009
*/
