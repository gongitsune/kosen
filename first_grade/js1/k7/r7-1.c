/* 23 豊島圭吾
 * レポート7回目 プログラム1
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
  int sum;
  for (i = 0; i < ROW; i++) {
    sum = 0;
    for (j = 0; j < COL; j++) {
      sum += array[i][j];
    }
    for (j = 0; j < COL; j++) {
      printf("%d ", array[i][j]);
    }
    printf("%.1f\n", sum / (double)COL);
  }

  return 0;
}

/* 実行結果
70 65
92 83
75 85
66 74
89 92
出力
70 65 67.5
92 83 87.5
75 85 80.0
66 74 70.0
89 92 90.5
 */
