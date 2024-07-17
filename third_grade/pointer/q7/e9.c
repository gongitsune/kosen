#include <stdio.h>

void func(int a);

int main(void) {
  int a = 10;
  func(a);
  printf("%d\n", a);

  return 0;
}

void func(int a) { a = a * 2; }

/* 実行結果
10
*/
