/* 23 豊島圭吾
 * 課題集第7回目 プログラム5
 */

#include <stdio.h>

int main(void) {
  int n, i, r;
  scanf("%d", &n);

  int d[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &d[i]);
  }

  int index, max;
  for (i = 0; i < n; i++) {
    index = i;
    max = d[i];
    for (r = i + 1; r < n; r++) {
      if (d[r] > max) {
        index = r;
        max = d[r];
      }
    }
    d[index] = d[i];
    d[i] = max;
  }

  for (i = 0; i < n; i++) {
    printf("%d ", d[i]);
  }
  printf("\n");

  return 0;
}
