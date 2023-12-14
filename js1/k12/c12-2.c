/* 23 豊島圭吾
 * 第12回挑戦的課題 プログラム2
 */

#include <stdio.h>

int str2int(char *s);

int main(void) {
  int n;
  n = str2int("-1024");
  printf("n = %d\n", n);
  return 0;
}

int str2int(char *s) {
  int i = 0, n = 0, sign = 1;
  if (s[0] == '-') {
    sign = -1;
    i++;
  } else if (s[0] == '+') {
    i++;
  }
  while (s[i] != '\0') {
    n = n * 10 + s[i] - '0';
    i++;
  }
  return n * sign;
}

/*
n = -1024
n = 365
n = -365
*/
