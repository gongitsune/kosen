/* 23 豊島圭吾
 * 第6回課題 プログラム3
 */

#include <stdio.h>

int main(void) {
  int a[10], i, j, tmp;

  for (i = 0; i < 10; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  for (i = 1; i < 10; i++) {
    j = i;
    while (j > 0 && a[j] > a[j - 1]) {
      tmp = a[j];
      a[j] = a[j - 1];
      a[j - 1] = tmp;
      j--;
    }
  }

  for (i = 0; i < 10; i++) {
    printf("%2d : %5d\n", i, a[i]);
  }

  return 0;
}

/* 実行結果
a[0] = 124
a[1] = 12
a[2] = 24
a[3] = 1245
a[4] = 12
a[5] = 1234
a[6] = 1
a[7] = 5
a[8] = 1
a[9] = 67
 0 :  1245
 1 :  1234
 2 :   124
 3 :    67
 4 :    24
 5 :    12
 6 :    12
 7 :     5
 8 :     1
 9 :     1
 */
