#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  printf("n=");
  scanf("%d", &n);

  int *p = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    scanf("%d", p + i);
  }

  for (int i = 0; i < n; i++) {
    printf("[%p] ", p + i);
    for (int r = 0; r < sizeof(int); r++) {
      printf("%02x ", *((unsigned char *)(p + i) + r));
    }
    printf("\n");
  }

  free(p);
  return 0;
}

/* 実行結果
n=4
1
10
100
1000
[0x55c07b1a4ac0] 01 00 00 00
[0x55c07b1a4ac4] 0a 00 00 00
[0x55c07b1a4ac8] 64 00 00 00
[0x55c07b1a4acc] e8 03 00 00
*/
