/* 23 豊島圭吾
 * 第12回挑戦的課題 プログラム3
 */

#include <math.h>
#include <stdio.h>

float str2float(char *s);

int main(void) {
  float n;
  n = str2float("-3.14");
  printf("n = %f\n", n);
  return 0;
}

float str2float(char *s) {
  int i = 0, sign = 1, n = 0, cnt = 0;

  if (s[0] == '-') {
    sign = -1;
    i++;
  } else if (s[0] == '+') {
    i++;
  }
  while (s[i] != '\0') {
    if (s[i] == '.') {
      cnt++;
      i++;
    }

    if (cnt > 0)
      cnt++;
    n = n * 10 + s[i] - '0';
    i++;
  }
  return n * sign * powf(0.1, cnt - 1);
}

/*
n = -3.140000
n = 3.140000
n = 3.140000
 */
