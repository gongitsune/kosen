/* 23 豊島圭吾
 * 第12回課題 プログラム1
 */

#include <stdio.h>

void mystrcpy(char *s1, char *s2);

int main() {
  char s1[100], s2[100];

  printf("string2 = ");
  scanf("%s", s2);
  mystrcpy(s1, s2);
  printf("string1 = %s\n", s1);

  return 0;
}

void mystrcpy(char *s1, char *s2) {
  int i = 0;
  while (s2[i] != '\0') {
    s1[i] = s2[i];
    i++;
  }
  s1[i] = '\0';
}

/*
string2 = takuma
string1 = takuma
*/
