/* 23 豊島圭吾
 * 第13回課題 プログラム4
 */

#include <string.h>

#include <stdio.h>
int main(void) {
  char path[100];
  printf("入力ファイル名 = ");
  scanf("%s", path);

  FILE *in_fp, *out_fp;
  if ((in_fp = fopen(path, "r")) == NULL) {
    printf("入力ファイルがありません\n");
    return 1;
  }

  printf("出力ファイル名 = ");
  scanf("%s", path);
  if ((out_fp = fopen(path, "w")) == NULL) {
    printf("出力ファイルがありません\n");
    return 1;
  }

  int i, sum_cnt = 0;
  int cnt[20];
  for (i = 0; i < 20; i++) {
    cnt[i] = 0;
  }

  char s[100];
  while (fscanf(in_fp, "%s", s) != EOF) {
    cnt[(int)strlen(s) - 1]++;
    sum_cnt++;
  }

  fclose(in_fp);

  fprintf(out_fp, "文字数 : 単語数\n");
  for (i = 0; i < 10; i++) {
    fprintf(out_fp, "%2d : %5.2f %%", i + 1, cnt[i] / (double)sum_cnt * 100);
    fprintf(out_fp, "              %2d : %5.2f %%\n", i + 10 + 1,
            cnt[i + 10] / (double)sum_cnt * 100);
  }

  fclose(out_fp);

  return 0;
}

/* 実行結果
入力ファイル名 = snow-white.txt
出力ファイル名 = snow-white.out
*/

/* 実行結果(snow-white.out)
文字数 : 単語数
 1 :  1.97 %              11 :  0.62 %
 2 : 14.00 %              12 :  0.23 %
 3 : 30.53 %              13 :  0.30 %
 4 : 18.40 %              14 :  0.36 %
 5 : 14.00 %              15 :  0.00 %
 6 :  8.79 %              16 :  0.03 %
 7 :  5.64 %              17 :  0.00 %
 8 :  2.43 %              18 :  0.00 %
 9 :  1.31 %              19 :  0.00 %
10 :  1.38 %              20 :  0.00 %
*/
