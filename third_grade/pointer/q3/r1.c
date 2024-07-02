#include <stdio.h>

int a, b;
int c = 100, d = 200;

int main(void) {
  int e, f;
  int g = 10, h = 20;

  printf("a [%p] -> %d\n", &a, a);
  printf("b [%p] -> %d\n", &b, b);
  printf("c [%p] -> %d\n", &c, c);
  printf("d [%p] -> %d\n", &d, d);
  printf("e [%p] -> %d\n", &e, e);
  printf("f [%p] -> %d\n", &f, f);
  printf("g [%p] -> %d\n", &g, g);
  printf("h [%p] -> %d\n", &h, h);

  return 0;
}

/* 実行結果
a [0x55818faca02c] -> 0
b [0x55818faca030] -> 0
c [0x55818faca020] -> 100
d [0x55818faca024] -> 200
e [0x7ffd0d650ef8] -> 611626176
f [0x7ffd0d650efc] -> 32673
g [0x7ffd0d650f00] -> 10
h [0x7ffd0d650f04] -> 20
*/
