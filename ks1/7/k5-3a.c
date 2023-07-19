/* 23 豊島圭吾
 * 課題集第7回目 プログラム2
 */

#include <stdio.h>

int main(void) {
  int n, i;
  printf("データ数 = ");
  scanf("%d", &n);
  printf("番号  現国  古文\n");

  double sum_genkoku = 0., sum_kobun = 0.;
  int _, genkoku, kobun;
  for (i = 0; i < n; i++) {
    scanf("%d%d%d", &_, &genkoku, &kobun);
    sum_genkoku += genkoku;
    sum_kobun += kobun;
  }
  printf("   ----- -----\n");
  printf("平均  %.1f  %.1f\n", sum_genkoku / n, sum_kobun / n);

  return 0;
}

/* 実行結果 23 豊島圭吾
番号  現国  古文
1 35 57
2 57 69
3 74 65
4 45 67
5 26 67
6 86 77
7 13 26
8 98 85
9 54 50
10 45 63
   ----- -----
平均  53.3  62.6
 */
