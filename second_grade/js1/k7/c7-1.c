/* 23 豊島圭吾
 * 挑戦的課題7回目 プログラム1
 */

#include <stdio.h>

int main(void) {
  const int ROW = 5, COL = 2;

  int array[ROW][COL], i, j;
  int score_sum = 0, s = 0;

  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) {
      scanf("%d", &array[i][j]);
    }
    score_sum += array[i][0] * array[i][1];
    s += array[i][1];
  }

  printf("出力\n");
  printf("平均 = %.2f\n", score_sum / (double)s);

  return 0;
}

/* 実行結果
70 2
92 1
75 2
66 4
89 2
出力
平均 = 74.91 */
