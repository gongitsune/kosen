#include <stdio.h>

int main(void) {
  int a[100];

  int i, j;
  printf("i = ");
  scanf("%d", &i);
  printf("j = ");
  scanf("%d", &j);

  printf("&a[%2d] = %p\n", i, &a[i]);
  printf("&a[%2d] = %p\n", j, &a[j]);
  printf("%ld byteの差があります\n", (&a[j] - &a[i]) * sizeof(int));

  return 0;
}

/* 実行結果
i = 0
j = 99
&a[ 0] = 0x7fff77915e80
&a[99] = 0x7fff7791600c
396 byteの差があります

i = 64
j = 24
&a[64] = 0x7ffe4217f800
&a[24] = 0x7ffe4217f760
-160 byteの差があります
*/
