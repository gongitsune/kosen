#include <stdio.h>

int mystrlen(char *s);

int main(void) {
  char s1[] = "kagawa_kosen";

  printf("s1 = %s\n", s1);
  printf("strlen(s1) = %d\n", mystrlen(s1));

  return 0;
}

int mystrlen(char *s) {
  int len = 0;
  while (*(s++) != '\0') {
    len++;
  }
  return len;
}

/* 実行結果
s1 = kagawa_kosen
strlen(s1) = 12
*/
