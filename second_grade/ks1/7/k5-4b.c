/* 23 豊島圭吾
 * 課題集第7回 プログラム6
 */

#include <stdio.h>

int main(void) {
  int n, i;
  scanf("%d", &n);

  int d[n], num[n];
  for (i = 0; i < n; i++) {
    printf("%d ", i + 1);
    scanf("%d", &d[i]);
    num[i] = i + 1;
  }

  printf("ソート前データ\n");
  printf("番号 音楽\n");
  for (i = 0; i < n; i++) {
    printf("%d %d\n", num[i], d[i]);
  }

  int max, index, j;
  for (i = 1; i < n; i++) {
    j = i;
    while (j > 0 && d[j - 1] < d[j]) {
      int tmp = d[j - 1];
      int tmp2 = num[j - 1];
      d[j - 1] = d[j];
      num[j - 1] = num[j];
      d[j] = tmp;
      num[j] = tmp2;
      j--;
    }
  }

  printf("ソート後データ\n");
  printf("番号 音楽\n");
  for (i = 0; i < n; i++) {
    printf("%2d %d\n", num[i], d[i]);
  }

  return 0;
}

/* 実行結果 23 豊島圭吾
10
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
ソート前データ
番号 音楽
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
ソート後データ
番号 音楽
 5 96
 3 85
 7 81
10 76
 6 75
 4 57
 1 56
 9 50
 2 47
 8 31
 */
