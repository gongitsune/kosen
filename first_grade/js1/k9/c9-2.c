/* 23 豊島圭吾
 * 第9回挑戦的課題 プログラム2
 */

#include <stdio.h>

int readdata(int a[]);
void ranking(int r[], const int data[], int n);

int main(void) {
  int a[100], n;
  n = readdata(a);

  int r[n];
  ranking(r, a, n);

  int i;
  printf("\n");
  for (i = 0; i < n; i++) {
    printf("r[%d]: %d\n", i, r[i]);
  }

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

void ranking(int r[], const int data[], int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    r[i] = 1;
    for (j = 0; j < n; j++) {
      if (data[i] < data[j])
        r[i]++;
    }
  }
}

/* 実行結果
n = 6
a[0] = 93
a[1] = 56
a[2] = 99
a[3] = 88
a[4] = 61
a[5] = 70

r[0]: 2
r[1]: 6
r[2]: 1
r[3]: 3
r[4]: 5
r[5]: 4
*/
