/* 23 豊島圭吾
 * レポート7回目 プログラム2
 */

#include <stdio.h>

int main(void) {
  const int ROW = 5, COL = 2;

  int array[ROW][COL], i, j;

  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) {
      scanf("%d", &array[i][j]);
    }
  }

  printf("出力\n");
  int sum[COL];
  for (i = 0; i < COL; i++)
    sum[i] = 0;
  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) {
      sum[j] += array[i][j];
      printf("%4d ", array[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < COL; i++) {
    printf("%.1f ", sum[i] / (double)ROW);
  }
  printf("\n");

  return 0;
}

/* 実行結果
70 65
92 83
75 85
66 74
89 92
出力
  70   65
  92   83
  75   85
  66   74
  89   92
78.4 79.8
 */
