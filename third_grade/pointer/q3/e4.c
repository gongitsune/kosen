#include <stdio.h>

int main(void) {
  int a, b;
  int *p = &a;

  scanf("%d", p);
  printf("a = %d\n", a);

  return 0;
}

/* 実行結果
123
a = 123
*/
