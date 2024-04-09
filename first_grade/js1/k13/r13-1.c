/* 23 豊島圭吾
 * 第13回課題 プログラム1
 */

#include <stdio.h>
int main(void) {
  char path[100];
  printf("成績ファイル名 = ");
  scanf("%s", path);

  FILE *fp;
  if ((fp = fopen(path, "r")) == NULL) {
    printf("成績ファイルがありません\n");
    return 1;
  }

  int score, unit, score_sum = 0, unit_sum = 0, subject_cnt = 0;
  while (fscanf(fp, "%d %d", &score, &unit) != EOF) {
    subject_cnt++;
    unit_sum += unit;

    score_sum += score * unit;
  }

  fclose(fp);

  printf("科目数 = %d\n", subject_cnt);
  printf("総単位数 = %d\n", unit_sum);
  printf("合計 = %d\n", score_sum);
  printf("平均 = %f\n", (double)score_sum / unit_sum);

  return 0;
}

/* 実行結果
成績ファイル名 = seiseki2.txt
科目数 = 10
総単位数 = 21
合計 = 1723
平均 = 82.047619
*/
