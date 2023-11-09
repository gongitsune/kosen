/* 23 豊島圭吾
 * 第11回挑戦的課題プログラム2\3
 */

#include <stdio.h>
#define IN 1
#define OUT 0

int main(void) {
  char s1[100], s2[100], s3[100], tmp[100];
  printf("string1 = ");
  scanf("%s", s1);
  printf("string2 = ");
  scanf("%s", s2);
  printf("string3 = ");
  scanf("%s", s3);

  int s3_len = 0;
  while (s3[s3_len] != '\0') {
    s3_len++;
  }

  int i = 0, r = 0, state = OUT;
  while (s1[i] != '\0') {
    if (s1[i] == s2[0]) {
      r = 0;
      state = IN;
    }

    if (state == IN) {
      if (s1[i] == s2[r]) {
        r++;
        if (s2[r] == '\0') {
          // ずらす
          int n = 0;

          state = OUT;
        }
      } else {
        state = OUT;
      }
    }

    i++;
  }

  return 0;
}

/* 実行結果
string1 = abc123aabc1234aaabc12345
string2 = abc
文字列 abc は 3 個含まれています。
*/
