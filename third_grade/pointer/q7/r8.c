#include <stdio.h>

void print_array(int *p, int n);

int main(void) {
  int i, n, d[100];
  int *p = d;
  printf("n = ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", p + i);
  }

  print_array(p, n);

  return 0;
}

void print_array(int *p, int n) {
  for (int i = 0; i < n; i++) {
    int *q = p + i;
    printf("[%p] %d (%08x)\n", q, *q, *q);
  }
}

/* 実行結果
n = 3
100
200
300
[0x7ffcf4625f00] 100 (00000064)
[0x7ffcf4625f04] 200 (000000c8)
[0x7ffcf4625f08] 300 (0000012c)
*/
