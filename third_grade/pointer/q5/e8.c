#include <stdio.h>

int main(void) {
  int a = 1234567;
  unsigned char *p = (unsigned char *)&a;
  printf("%02x\n", *p);

  return 0;
}

/* 実行結果
87
*/
