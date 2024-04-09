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

  printf("データ数 %d\n", n);
  printf("ソート前データ ");
  for (i = 0; i < n; i++)
    printf("%d ", d[i]);
  printf("\n");

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

  printf("ソート後データ ");
  for (i = 0; i < n; i++) {
    printf("%d ", d[i]);
  }
  printf("\n");

  return 0;
}

/* 実行結果 23 豊島圭吾
6
11 7 20 16 9 5
データ数 6
ソート前データ 11 7 20 16 9 5
ソート後データ 20 16 11 9 7 5
 */
