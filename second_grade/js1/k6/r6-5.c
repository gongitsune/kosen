/* 23 豊島圭吾
 * 第6回課題 プログラム5
 */

#include <stdio.h>

int main(void) {
  int a[11], x, i, j;

  for (i = 1; i <= 10; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  for (i = 2; i <= 10; i++) {
    x = a[i];
    j = i;
    a[0] = x;
    while (x > a[j - 1]) {
      a[j] = a[j - 1];
      j--;
    }
    a[j] = x;
  }

  for (i = 1; i <= 10; i++)
    printf("%2d : %5d\n", i, a[i]);

  return 0;
}

/* 実行結果
a[1] = 12
a[2] = 124
a[3] = 123
a[4] = 1
a[5] = 466
a[6] = 12
a[7] = 12
a[8] = 45
a[9] = 4
a[10] = 6
 1 :   466
 2 :   124
 3 :   123
 4 :    45
 5 :    12
 6 :    12
 7 :    12
 8 :     6
 9 :     4
10 :     1
 */
