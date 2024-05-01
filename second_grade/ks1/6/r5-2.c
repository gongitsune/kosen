/* 23 豊島圭吾
 * 課題集第6回 プログラム4
 */

#include <limits.h>
#include <stdio.h>

int main(void) {
  int n, i;
  printf("n = ");
  scanf("%d", &n);
  int d[n];

  for (i = 0; i < n; i++) {
    scanf("%d", &d[i]);
  }

  int max = INT_MIN;
  for (i = 0; i < n; i++) {
    if (d[i] > max)
      max = d[i];
  }
  printf("max = %d\n", max);

  return 0;
}

/* 実行結果 23 豊島圭吾
n = 5
1
3
2
6
8
max = 8
 */
