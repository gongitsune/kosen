#include <stdio.h>

int main(void) {
  char s[100];
  char *p = s;

  printf("str = ");
  scanf("%s", p);

  while (*p != '\0') {
    printf("[%p]: %c\n", p, *p);
    p++;
  }

  return 0;
}

/* 実行結果
str = takuma
[0x7ffe6a797130]: t
[0x7ffe6a797131]: a
[0x7ffe6a797132]: k
[0x7ffe6a797133]: u
[0x7ffe6a797134]: m
[0x7ffe6a797135]: a
*/
