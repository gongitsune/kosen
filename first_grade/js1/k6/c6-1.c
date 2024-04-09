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

/* 実行結果
a[0] = 213
a[1] = 5
a[2] = 12
a[3] = 66
a[4] = 33
a[5] = 12
a[6] = 1567
a[7] = 2
a[8] = 36
a[9] = 11
 0 :  1567
 1 :   213
 2 :    66
 3 :    36
 4 :    33
 5 :    12
 6 :    12
 7 :    11
 8 :     5
 9 :     2
 */
