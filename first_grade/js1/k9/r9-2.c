/* 23 豊島圭吾
 * 第9回レポート プログラム2
 */

#include <stdio.h>

int readdata(int a[]);
void sort(int a[], int n);
void writedata(const int a[], int n);

int main(void) {
  int a[100], n;
  n = readdata(a);
  sort(a, n);
  writedata(a, n);

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

void writedata(const int a[], int n) {
  int i;
  for (i = 0; i < n; i++)
    printf("a[%d]: %d\n", i, a[i]);
}

void sort(int a[], int n) {
  int max, index, i, j;

  for (i = 0; i < n; i++) {
    max = a[i];
    index = i;
    for (j = i + 1; j < n; j++) {
      if (a[j] > max) {
        max = a[j];
        index = j;
      }
    }
    a[index] = a[i];
    a[i] = max;
  }
}

/* 実行結果
n = 5
a[0] = 1
a[1] = 3
a[2] = 5
a[3] = 4
a[4] = 2
a[0]: 5
a[1]: 4
a[2]: 3
a[3]: 2
a[4]: 1
*/
