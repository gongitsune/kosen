/* 23 豊島圭吾
 * 第12回課題 プログラム3
 */

#include <stdio.h>

int mystrcmp(char *s1, char *s2);

int main() {
  char s1[100], s2[100];
  printf("string1 = ");
  scanf("%s", s1);
  printf("string2 = ");
  scanf("%s", s2);

  int n = mystrcmp(s1, s2);
  if (n > 0)
    printf("string1(%s) > string2(%s)\n", s1, s2);
  else if (n < 0)
    printf("string1(%s) < string2(%s)\n", s1, s2);
  else
    printf("string1(%s) = string2(%s)\n", s1, s2);

  return 0;
}

int mystrcmp(char *s1, char *s2) {
  int i = 0;
  while (s1[i] != '\0' && s2[i] != '\0') {
    if (s1[i] > s2[i])
      return 1;
    else if (s1[i] < s2[i])
      return -1;
    i++;
  }
  if (s1[i] == '\0' && s2[i] == '\0')
    return 0;
  else if (s1[i] == '\0')
    return -1;
  else
    return 1;
}

/*
string1 = apple
string2 = apply
string1(apple) < string2(apply)
*/
