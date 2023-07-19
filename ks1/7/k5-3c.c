/* 23 豊島圭吾
 * 課題集第7回目 プログラム3
 */

#include <stdio.h>

int main(void) {
  int n, i, j;
  scanf("%d", &n);

  double sums[4];
  for (i = 0; i < 4; i++) {
    sums[i] = 0;
  }
  int _, scores[3 * n];
  for (i = 0; i < n; i++) {
    scanf("%d", &_);
    for (j = i * 3; j < i * 3 + 3; j++) {
      scanf("%d", &scores[j]);
      sums[j % 3] += scores[j];
    }
  }

  printf("番号 地理 日本史 世界史 平均\n");
  for (i = 0; i < n; i++) {
    printf("%2d", i + 1);
    int s = 0;
    for (j = i * 3; j < i * 3 + 3; j++) {
      s += scores[j];
      printf(" %5d", scores[j]);
    }
    printf("    %.1f\n", s / 3.);
    sums[3] += s / 3.;
  }
  printf("   ----- ----- ----- -----\n");
  printf("平均");
  for (i = 0; i < 4; i++) {
    printf("%.1f  ", sums[i] / n);
  }
  printf("\n");

  return 0;
}

/* 実行結果 23 豊島圭吾
10
1 35 57 45
2 57 69 67
3 74 65 84
4 45 67 39
5 26 67 29
6 86 77 57
7 13 26 67
8 98 85 58
9 54 50 34
10 45 63 19
番号 地理 日本史 世界史 平均
 1    35    57    45    45.7
 2    57    69    67    64.3
 3    74    65    84    74.3
 4    45    67    39    50.3
 5    26    67    29    40.7
 6    86    77    57    73.3
 7    13    26    67    35.3
 8    98    85    58    80.3
 9    54    50    34    46.0
10    45    63    19    42.3
   ----- ----- ----- -----
平均53.3  62.6  49.9  55.3
 */