/* 23 豊島圭吾
 * 第12回課題 プログラム2
 */

#include <stdio.h>

void mystrcat(char *s1, char *s2);

int main() {
  char s1[100], s2[100];
  printf("string1 = ");
  scanf("%s", s1);
  printf("string2 = ");
  scanf("%s", s2);
  mystrcat(s1, s2);
  printf("string1 = %s\n", s1);

  return 0;
}

void mystrcat(char *s1, char *s2) {
  int i = 0, j = 0;
  while (s1[i] != '\0') {
    i++;
  }
  while (s2[j] != '\0') {
    s1[i] = s2[j];
    i++;
    j++;
  }
  s1[i] = '\0';
}

/*
string1 = kagawa
string2 = kosen
string1 = kagawakosen
*/
