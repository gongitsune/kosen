/* 23 豊島圭吾
 * 第9回レポート プログラム3
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
  int i, r;
  for (i = 0; i < n; i++) {
    printf("a[%d]:", i);
    for (r = 0; r < a[i]; r++) {
      printf("*");
    }
    printf("\n");
  }
}

/* 実行結果
n = 5
a[0] = 7
a[1] = 3
a[2] = 5
a[3] = 0
a[4] = 2
a[0]:*******
a[1]:***
a[2]:*****
a[3]:
a[4]:**
*/
