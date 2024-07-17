#include <stdio.h>

void mystrcpy(char *s1, char *s2);

int main(void) {
  char s1[] = "kagawa_kosen";
  char s2[100];

  mystrcpy(s1, s2);
  printf("s1 = %s\n", s1);
  printf("s2 = %s\n", s2);

  return 0;
}

void mystrcpy(char *s1, char *s2) {
  while (*s1 != '\0') {
    *s2 = *s1;
    s1++;
    s2++;
  }
  *s2 = '\0';
}

/* 実行結果
s1 = kagawa_kosen
s2 = kagawa_kosen
*/
