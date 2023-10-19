/* 23 豊島圭吾
 * 第9回レポート プログラム1
 */

#include <stdio.h>

int readdata(int a[]);
int maxf(const int a[], int n);

int main(void) {
  int a[10], n, max;
  n = readdata(a);
  max = maxf(a, n);
  printf("最大値 = %d\n", max);

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

int maxf(const int a[], int n) {
  int i, max = a[0];
  for (i = 1; i < n; i++) {
    if (max < a[i])
      max = a[i];
  }

  return max;
}

/* 実行結果
n = 5
a[0] = 1
a[1] = 3
a[2] = 5
a[3] = 4
a[4] = 2
最大値 = 5
*/
