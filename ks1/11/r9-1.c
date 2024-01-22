/* 23 豊島圭吾
 * 第11回課題 プログラム1
 */

#include <stdio.h>

int main(void) {
  FILE *fp;
  int d, i, n, no;

  if ((fp = fopen("a", "w")) == NULL) {
    printf("ファイルをオープンできません。\n");
    return 1;
  }
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &d);
    fprintf(fp, "%2d %3d\n", i + 1, d);
  }

  fclose(fp);

  if ((fp = fopen("a", "r")) == NULL) {
    printf("ファイルをオープンできません。\n");
    return 1;
  }
  printf("人数 = %d\n", n);
  printf("番号 成績\n");
  while (fscanf(fp, "%d%d", &no, &d) != EOF) {
    printf(" %2d %3d\n", no, d);
  }
  fclose(fp);

  return 0;
}

/* 実行結果 23 豊島圭吾
10
98
56
76
59
88
95
84
68
56
45
人数 = 10
番号 成績
  1  98
  2  56
  3  76
  4  59
  5  88
  6  95
  7  84
  8  68
  9  56
 10  45
*/
