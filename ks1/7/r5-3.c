/* 23 豊島圭吾
 * 課題集第7回目 プログラム1
 */

#include <stdio.h>

int main(void) {
  int n, i;
  printf("データ数 = ");
  scanf("%d", &n);
  printf("番号  音楽\n");

  int sum = 0, _, score;
  for (i = 0; i < n; i++) {
    scanf("%d%d", &_, &score);
    sum += score;
  }
  printf("-----\n");
  printf("平均  %.1f\n", sum / (double)n);

  return 0;
}

/* 実行結果 23 豊島圭吾
データ数 = 10
番号  音楽
1 56
2 47
3 85
4 57
5 96
6 75
7 81
8 31
9 50
10 76
-----
平均  65.4
 */
