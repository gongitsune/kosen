/* 23 豊島圭吾
 * 第6回課題 プログラム6
 */

#include <stdio.h>

int main(void) {
  int a[10], i, j, tmp;

  for (i = 0; i < 10; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  for (i = 1; i < 10; i++) {
    for (j = 9; j >= 0; j--) {
      if (a[j] > a[j - 1]) {
        tmp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = tmp;
      }
    }
  }

  for (i = 0; i < 10; i++)
    printf("%2d : %5d\n", i, a[i]);

  return 0;
}

/* 実行結果
a[0] = 142
a[1] = 12
a[2] = 456
a[3] = 123
a[4] = 124
a[5] = 24
a[6] = 6
a[7] = 7765
a[8] = 1
a[9] = 5
 0 :  7765
 1 :   456
 2 :   142
 3 :   124
 4 :   123
 5 :    24
 6 :    12
 7 :     6
 8 :     5
 9 :     1
 */
