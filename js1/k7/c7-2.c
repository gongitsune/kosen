/* 23 豊島圭吾
 * 挑戦的課題7回目 プログラム2
 */

#include <stdio.h>

#define ROW 5
#define COL 6

int main(void) {
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
81 76 92 60 79 84
68 77 83 62 70 99
68 82 86 65 77 83
90 67 81 61 73 76
78 82 79 66 81 88
出力
81 76 92 60 79 84 78.7
68 77 83 62 70 99 76.5
68 82 86 65 77 83 76.8
90 67 81 61 73 76 74.7
78 82 79 66 81 88 79.0
 */
