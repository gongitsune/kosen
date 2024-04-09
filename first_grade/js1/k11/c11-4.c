/* 23 豊島圭吾
 * 第11回挑戦的課題プログラム4
 */

#include <stdio.h>
#define IN 0
#define OUT 1

int main(void) {
  char s[100];
  int s_len;
  printf("s = ");
  scanf("%s%n", s, &s_len);

  int i = 0, j = s_len - 1;
  int is_palindrome = 1;
  while (i < j) {
    if (s[i++] != s[j--]) {
      is_palindrome = 0;
      break;
    }
  }

  if (is_palindrome) {
    printf("回文です。\n");
  } else {
    printf("回文ではありません。\n");
  }
}

/* 実行結果
s = racecar
回文です。
s = tomato
回文ではありません。
s = anna
回文です。
*/
