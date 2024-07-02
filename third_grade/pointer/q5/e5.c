#include <stdio.h>

int main(void) {
  char *pa = NULL;
  int *pb = NULL;
  double *pc = NULL;

  printf("pa = %p  pa + 1 = %p\n", pa, pa + 1);
  printf("pb = %p  pb + 1 = %p\n", pb, pb + 1);
  printf("pc = %p  pc + 1 = %p\n", pc, pc + 1);

  return 0;
}

/* 実行結果
pa = (nil)  pa + 1 = 0x1
pb = (nil)  pb + 1 = 0x4
pc = (nil)  pc + 1 = 0x8
*/
