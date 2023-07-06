/* 23 豊島圭吾
 * 挑戦的課題第6回 プログラム2
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int a[10], max, index, i, j;

  srand((unsigned int)time(NULL));
  for (i = 0; i < 10; i++) {
    a[i] = rand();
  }

  int cnt = 0;
  for (i = 0; i < 9; i++) {
    max = a[i];
    index = i;
    for (j = i + 1; j < 10; j++) {
      cnt++;
      if (a[j] > max) {
        max = a[j];
        index = j;
      }
    }
    a[index] = a[i];
    a[i] = max;
  }

  for (i = 0; i < 10; i++) {
    printf("%2d : %5d\n", i, a[i]);
  }
  printf("count: %d\n", cnt);

  return 0;
}
