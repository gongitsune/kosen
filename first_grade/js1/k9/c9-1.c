/* 23 豊島圭吾
 * 第9回挑戦的課題 プログラム1
 */

#include <stdio.h>

int readdata(int a[]);
void histogram(const int a[], int n);

int main(void) {
  int a[100], n;
  n = readdata(a);
  histogram(a, n);

  return 0;
}

int readdata(int a[]) {
  int n;
  printf("n = ");
  scanf("%d", &n);

  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  return n;
}

void histogram(const int a[], int n) {
  int i, r, max = a[0];

  for (i = 1; i < n; i++) {
    if (max < a[i])
      max = a[i];
  }

  printf("\n");
  for (i = max; i > 0; i--) {
    for (r = 0; r < n; r++) {
      if (a[r] >= i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }

  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

/* 実行結果
n = 5
a[0] = 7
a[1] = 3
a[2] = 5
a[3] = 0
a[4] = 2

*
*
*   *
*   *
* * *
* * *   *
* * *   *
7 3 5 0 2
*/
