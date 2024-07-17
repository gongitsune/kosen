#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, n;
  int *p;

  scanf("%d", &n);
  p = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    scanf("%d", p + i);
  }

  for (i = 0; i < n; i++) {
    printf("[%d] %d\n", i, *(p + i));
  }

  free(p);
  return 0;
}

/* 実行結果
4
5
6
7
3
[0] 5
[1] 6
[2] 7
[3] 3
*/
