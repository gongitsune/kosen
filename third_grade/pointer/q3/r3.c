#include <stdio.h>

int a;

int main(void) {
  int b;

  int *pa = &a;
  int *pb = &b;

  printf("pa [%p]\n", &pa);
  printf("pb [%p]\n", &pb);

  return 0;
}

/* 実行結果
pa [0x7fffb3a7a4d8]
pb [0x7fffb3a7a4e0]
 */
