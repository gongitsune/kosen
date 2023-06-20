#include <stdio.h>

int main(void) {
  int i;
  int cnt = 0;
  for (i = 0; i < 100; i++) {
    cnt++;
    i += 6;
  }

  printf("%d\n", cnt);
  return 0;
}
