/* 23 豊島圭吾
 * 課題集第7回目 プログラム4
 */

#include <stdio.h>

int main(void) {
  int n, i, j, _;
  scanf("%d", &n);

  int scores[n * 2], score, p[2] = {0, 0};
  double sums[2] = {0., 0.};
  for (i = 0; i < n; i++) {
    scanf("%d", &_);

    for (j = 0; j < 2; j++) {
      scanf("%d", &score);
      scores[i * 2 + j] = score;
      if (score != -1)
        sums[j] += score;
      else
        p[j]++;
    }
  }

  printf("番号  解析  代数\n");
  for (i = 0; i < n; i++) {
    printf("%2d", i + 1);

    for (j = 0; j < 2; j++) {
      printf("    %d", scores[i * 2 + j]);
    }
    printf("\n");
  }
  printf("    ----- -----\n");
  printf("平均  %.1f %.1f\n", sums[0] / (n - p[0]), sums[1] / (n - p[1]));

  return 0;
}

/* 実行結果 23 豊島圭吾
10
1 35 57
2 57 69
3 -1 -1
4 45 67
5 26 67
6 86 77
7 13 -1
8 -1 26
9 54 50
10 45 63
番号  解析  代数
 1    35    57
 2    57    69
 3    -1    -1
 4    45    67
 5    26    67
 6    86    77
 7    13    -1
 8    -1    26
 9    54    50
10    45    63
    ----- -----
平均  45.1 59.5
 */
