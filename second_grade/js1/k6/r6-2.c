/* 23 豊島圭吾
 * 第6回課題 プログラム2
 */

#include <stdio.h>

int main(void) {
  int a[10], max, index, i, j;

  for (i = 0; i < 10; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  for (i = 0; i < 9; i++) {
    max = a[i];
    index = i;
    for (j = i + 1; j < 10; j++) {
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

  return 0;
}

/* 実行結果
a[0] = 10
a[1] = 124
a[2] = 12
a[3] = 55
a[4] = 14
a[5] = 12
a[6] = 5
a[7] = 3
a[8] = 7
a[9] = 1
 0 :   124
 1 :    55
 2 :    14
 3 :    12
 4 :    12
 5 :    10
 6 :     7
 7 :     5
 8 :     3
 9 :     1
 */
