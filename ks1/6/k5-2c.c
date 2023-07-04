/* 23 豊島圭吾
 * 課題集第6回 プログラム5
 */

#include <stdio.h>

int main(void) {
  int n, i;
  printf("n = ");
  scanf("%d", &n);
  int d[n];

  for (i = 0; i < n; i++) {
    scanf("%d", &d[i]);
  }

  int m[2];
  for (i = 0; i < 2; i++) {
    printf("m%d = ", i + 1);
    scanf("%d", &m[i]);
  }

  for (i = 0; i < n; i++) {
    if (m[0] <= d[i] && d[i] <= m[1]) {
      printf("%d\n", d[i]);
    }
  }

  return 0;
}

/* 実行結果 23 豊島圭吾
n = 5
1
3
2
6
8
m1 = 3
m2 = 6
3
6
 */
