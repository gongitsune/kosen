#include <stdio.h>

int main(void) {
  char s[100];
  char *p = s;
  int i = 0;

  printf("str = ");
  scanf("%s", p);

  while (*(p + i) != '\0') {
    printf("[%p]: %c\n", p + i, *(p + i));
    i++;
  }

  return 0;
}

/*
str = takuma
[0x7ffd28d65720]: t
[0x7ffd28d65721]: a
[0x7ffd28d65722]: k
[0x7ffd28d65723]: u
[0x7ffd28d65724]: m
[0x7ffd28d65725]: a
*/
