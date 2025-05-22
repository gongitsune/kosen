#include <stdio.h>

int main() {
  int i, ito[5];
  for (i = 0; i < 5; i++) {
    ito[i] = i + 10;
  }
  for (i = 0; i < 5; i++) {
    fprintf(stderr, "ito[%d]=%d\n", i, ito[i]);
  }

  int *p, *q;
  p = &ito[1];
  fprintf(stderr, "*p=%d\n", *p);
  q = ito;
  fprintf(stderr, "*q=%d\n", *q);
  return 0;
}
