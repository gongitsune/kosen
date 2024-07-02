#include <stdio.h>

int main(void) {
  char a;
  int b;
  double c;

  char *pa = &a;
  int *pb = &b;
  double *pc = &c;

  printf("pa: %lu bytes, *pa: %lu bytes\n", sizeof(pa), sizeof(*pa));
  printf("pb: %lu bytes, *pb: %lu bytes\n", sizeof(pb), sizeof(*pb));
  printf("pc: %lu bytes, *pc: %lu bytes\n", sizeof(pc), sizeof(*pc));

  return 0;
}

/* 実行結果
pa: 8 bytes, *pa: 1 bytes
pb: 8 bytes, *pb: 4 bytes
pc: 8 bytes, *pc: 8 bytes
*/
