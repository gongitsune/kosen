/* 23 豊島圭吾
 * 第10回レポート プログラム2
 */

#include <stdio.h>

int main(void) {
  char c;
  int line_cnt = 0;
  while (scanf("%c", &c) != EOF) {
    if (c == '\n')
      line_cnt++;
  }

  printf("行数: %d\n", line_cnt);

  return 0;
}

/* 実行結果
行数: 80
*/
