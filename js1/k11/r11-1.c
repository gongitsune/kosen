/* 23 豊島圭吾
 * 第11回課題プログラム1
 */

#include <stdio.h>
#define IN 1
#define OUT 0

int main(void) {
  char c;
  int state = OUT, wc = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t' || c == '\r') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      wc++;
    }
  }

  printf("単語数 = %d\n", wc);
}

/* 実行結果
単語数 = 3049
*/
