/* 23 豊島圭吾
 * 挑戦的課題第6回 プログラム1
 */

#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int a[10], i, j, tmp;
  bool changed;

  for (i = 0; i < 10; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  for (i = 1; i < 10; i++) {
    changed = false;
    for (j = 9; j >= 0; j--) {
      if (a[j] > a[j - 1]) {
        tmp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = tmp;
        changed = true;
      }
    }
    if (!changed)
      i = 10;
  }

  for (i = 0; i < 10; i++)
    printf("%2d : %5d\n", i, a[i]);

  return 0;
}
