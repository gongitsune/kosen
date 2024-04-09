/* 23 豊島圭吾
 * 第10回挑戦的課題 プログラム4
 */

#include <stdio.h>

int main(void) {
  char c;
  int count = 0;
  while (scanf("%c", &c) != EOF) {
    if (c == '(') {
      count++;
    } else if (c == ')') {
      count--;
    } else if (c == '\n') {
      if (count == 0) {
        printf("あっています\n");
      } else if (count > 0) {
        printf("開きカッコが多すぎます\n");
      } else {
        printf("閉じカッコが多すぎます\n");
      }

      count = 0;
    }
  }

  return 0;
}

/* 実行結果
(a (b (c) d (e)))
あっています
(a (b (c) d) (e)))
閉じカッコが多すぎます
*/
