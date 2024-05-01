/* 23 豊島圭吾
 * 第9回レポート プログラム3
 */

#include <stdio.h>
#include <unistd.h>

int readdata(int a[]);
void histogram(const int a[], const int rank[], int n, const int light[]);
void sort(int a[], int n);

int main(void) {
  int a[100], n;
  n = readdata(a);
  sort(a, n);
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

void histogram(const int a[], const int rank[], int n, const int light[]) {
  int i, r;
  for (i = 0; i < n; i++) {
    printf("\033[Ka[%d]:", rank[i]);
    if (light[i]) {
      printf("\033[31m");
    }
    for (r = 0; r < a[i]; r++) {
      printf("*");
    }
    printf("\n");
    printf("\033[0m");
  }
}

void sort(int a[], int n) {
  int max, index, i, j, light[n], r[n];

  for (i = 0; i < n; i++) {
    r[i] = i;
    light[i] = 0;
  }

  // 初期状態のヒストグラムを表示
  histogram(a, r, n, light);

  for (i = 0; i < n; i++) {
    max = a[i];
    index = i;
    for (j = i + 1; j < n; j++) {
      if (a[j] > max) {
        max = a[j];
        index = j;
      }
    }
    j = r[index];
    r[index] = r[i];
    r[i] = j;

    usleep(500 * 1000);
    printf("\033[%dA", n);
    light[index] = 1;
    light[i] = 1;
    histogram(a, r, n, light);
    a[index] = a[i];
    a[i] = max;

    usleep(500 * 1000);
    printf("\033[%dA", n);
    histogram(a, r, n, light);
    light[index] = 0;
    light[i] = 0;
  }

  printf("\033[%dA", n);
  histogram(a, r, n, light);
}

/* 実行結果
n = 5
a[0] = 7
a[1] = 2
a[2] = 8
a[3] = 0
a[4] = 3
a[2]:********
a[0]:*******
a[4]:***
a[1]:**
a[3]:
*/
