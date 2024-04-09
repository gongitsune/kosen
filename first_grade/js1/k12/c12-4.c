/* 23 豊島圭吾
 * 第12回挑戦的課題 プログラム4
 */

#include <stdio.h>

void reverse(char *s);

int main(void) {
  char s[100];

  scanf("%s", s);
  reverse(s);
  printf("%s\n", s);
  return 0;
}

void reverse(char *s) {
  int i = 0, j = 0;
  char t;

  while (s[i] != '\0') {
    i++;
  }
  i--;

  while (j < i) {
    t = s[j];
    s[j] = s[i];
    s[i] = t;
    j++;
    i--;
  }
}

/*
Japanese
esenapaJ
*/
