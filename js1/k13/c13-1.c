/*  23 豊島圭吾
 * 第13回挑戦的課題 プログラム1
 */

#include <stdio.h>
#include <string.h>

#define NAME "豊島"
#define ID 23

int main(void) {
  char path[100];
  printf("プログラムファイル名 = ");
  scanf("%s", path);

  int report_n, program_n;

  char file_name[100];
  int last_slash_i = -1;
  int i = 0;
  while (path[i] != '\0') {
    if (path[i] == '/') {
      last_slash_i = i;
    }
    i++;
  }

  strncpy(file_name, path + last_slash_i + 2, i - last_slash_i - 1);
  sscanf(file_name, "%d-%d.c", &report_n, &program_n);

  FILE *in_fp;
  if ((in_fp = fopen(path, "r")) == NULL) {
    printf("プログラムファイルがありません\n");
    return 1;
  }

  printf("レポートファイル名 = ");
  scanf("%s", path);
  FILE *out_fp;
  if ((out_fp = fopen(path, "w")) == NULL) {
    printf("レポートファイルを作成できません\n");
    return 1;
  }

  fprintf(out_fp, "/* %d番 %s */\n", ID, NAME);
  fprintf(out_fp, "/* 第 %d 回レポート No.%d */\n", report_n, program_n);

  i = 1;
  char line[100];
  while (fgets(line, sizeof(line), in_fp) != NULL) {
    fprintf(out_fp, "%d %s", i++, line);
  }

  fclose(in_fp);
  fclose(out_fp);

  return 0;
}

/* 実行結果
プログラムファイル名 = ./js1/k13/r13-9.c
レポートファイル名 = ./js1/k13/r13-9.out

--------
入力ファイル ./js1/k13/r13-9.c
--------
#include <stdio.h>
int main(void) {
  char path[100];
  printf("成績ファイル名 = ");
  scanf("%s", path);

  FILE *fp;
  if ((fp = fopen(path, "r")) == NULL) {
    printf("成績ファイルがありません\n");
                  .
                  .
                  .
*/

/*
---------
出力ファイル ./js1/k13/r13-9.out
---------
*/
/* 23番 豊島 */
/* 第 13 回レポート No.9 */
/*
1 #include <stdio.h>
2 int main(void) {
3   char path[100];
4   printf("成績ファイル名 = ");
5   scanf("%s", path);
6
7   FILE *fp;
8   if ((fp = fopen(path, "r")) == NULL) {
9     printf("成績ファイルがありません\n");
                  .
                  .
                  .
*/
