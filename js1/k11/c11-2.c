/* 23 豊島圭吾
 * 第11回挑戦的課題プログラム2
 */

#include <stdio.h>
#define IN 0
#define OUT 1

int main(void) {
  char source[100], target[100];
  printf("string1 = ");
  scanf("%s", source);
  printf("string2 = ");
  scanf("%s", target);

  int i = -1, r, cnt = 0, state = OUT;
  while (source[++i] != '\0') {
    if (source[i] == target[0]) {
      r = 0;
      state = IN;
    }

    if (state == IN && source[i] == target[r++]) {
      if (target[r] == '\0') {
        cnt++;
        state = OUT;
      }
    } else {
      state = OUT;
    }
  }

  printf("文字列 %s は %d 個含まれています。\n", target, cnt);
  return 0;
}

/* 実行結果
string1 = abc123aabc1234aaabc12345
string2 = abc
文字列 abc は 3 個含まれています。
*/
