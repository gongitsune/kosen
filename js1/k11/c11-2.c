/* 23 豊島圭吾
 * 第11回挑戦的課題プログラム2
 */

#include <stdio.h>
#define IN 1
#define OUT 0

int main(void) {
  char s1[100], s2[100];
  printf("string1 = ");
  scanf("%s", s1);
  printf("string2 = ");
  scanf("%s", s2);

  int i = 0, r = 0, cnt = 0, state = OUT;
  while (s1[i] != '\0') {
    if (s1[i] == s2[0]) {
      r = 0;
      state = IN;
    }

    if (state == IN) {
      if (s1[i] == s2[r]) {
        r++;
        if (s2[r] == '\0') {
          cnt++;
          state = OUT;
        }
      } else {
        state = OUT;
      }
    }

    i++;
  }

  printf("文字列 %s は %d 個含まれています。\n", s2, cnt);
  return 0;
}

/* 実行結果
string1 = abc123aabc1234aaabc12345
string2 = abc
文字列 abc は 3 個含まれています。
*/
