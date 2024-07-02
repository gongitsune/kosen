#include <stdio.h>

int main(void) {
  int d[] = {1, 10, 100, 1000, 10000};
  int *p = d;
  int i, n;

  n = sizeof(d) / sizeof(d[0]);
  for (i = 0; i < n; i++) {
    printf("[%p]: %d\n", p + i, *(p + i));
  }

  return 0;
}

/* 実行結果
[0x7ffcf1483a30]: 1
[0x7ffcf1483a34]: 10
[0x7ffcf1483a38]: 100
[0x7ffcf1483a3c]: 1000
[0x7ffcf1483a40]: 10000
*/
