/* 23 豊島圭吾
 * 挑戦的課題第6回 プログラム3
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sort(int *a, int size) {
  int i, x, j, cnt = 1;
  for (i = 2; i <= size; i++) {
    x = a[i];
    j = i;
    a[0] = x;
    while (x > a[j - 1]) {
      cnt++;
      a[j] = a[j - 1];
      j--;
    }
    a[j] = x;
  }

  return cnt;
}

void random_array(int *a, int size) {
  int i;
  for (i = 1; i < size; i++) {
    a[i] = rand();
  }
}

int main(void) {
  int a[11], i, cnt_sum = 0;

  srand((unsigned int)time(NULL));

  for (i = 0; i < 100; i++) {
    random_array(a, 11);
    cnt_sum += sort(a, 11);
  }
  printf("average count: %lf\n", cnt_sum / 100.);

  return 0;
}
