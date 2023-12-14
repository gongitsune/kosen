/* 23 豊島圭吾
 * 第12回挑戦的課題 プログラム1
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
  char c1, c2;
  while (s1[i] != '\0' && s2[i] != '\0') {
    c1 = s1[i];
    c2 = s2[i];
    if (c1 >= 'A' && c1 <= 'Z')
      c1 += 'a' - 'A';
    if (c2 >= 'A' && c2 <= 'Z')
      c2 += 'a' - 'A';
    if (c1 > c2)
      return 1;
    else if (c1 < c2)
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
string2 = April
string1(apple) < string2(April)

string1 = apple
string2 = America
string1(apple) > string2(America)
*/
