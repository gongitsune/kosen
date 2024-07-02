#include <stdio.h>

int main(void) {
  char s[100] = "abcdef";
  char *p = &s[3];

  scanf("%s", p);
  printf("%s\n", s);

  return 0;
}

/* 実行結果
DEF
abcDEF
*/
