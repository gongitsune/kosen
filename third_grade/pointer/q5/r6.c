#include <stdio.h>

int main(void) {
  int a;
  printf("a = ");
  scanf("%d", &a);
  unsigned char *p = (unsigned char *)&a;

  int n = sizeof(a);
  for (int i = 0; i < n; i++, p++)
    printf("[%p]: %02x\n", p, *p);

  return 0;
}

/* 実行結果
a = -1
[0x7ffe98b081b4]: ff
[0x7ffe98b081b5]: ff
[0x7ffe98b081b6]: ff
[0x7ffe98b081b7]: ff
*/
