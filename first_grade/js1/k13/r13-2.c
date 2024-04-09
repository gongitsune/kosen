/* 23 豊島圭吾
 * 第13回課題 プログラム2
 */

#include <string.h>

#include <stdio.h>
int main(void) {
  char path[100];
  printf("入力ファイル名 = ");
  scanf("%s", path);

  FILE *fp;
  if ((fp = fopen(path, "r")) == NULL) {
    printf("入力ファイルがありません\n");
    return 1;
  }

  int i;
  int cnt[20];
  for (i = 0; i < 20; i++) {
    cnt[i] = 0;
  }

  char s[100];
  while (fscanf(fp, "%s", s) != EOF) {
    cnt[(int)strlen(s) - 1]++;
  }

  fclose(fp);

  printf("文字数 : 単語数\n");
  for (i = 0; i < 10; i++) {
    printf("%2d : %8d", i + 1, cnt[i]);
    printf("              %2d : %8d\n", i + 10 + 1, cnt[i + 10]);
  }

  return 0;
}

/* 実行結果
入力ファイル名 = snow-white.txt
文字数 : 単語数
 1 :       60              11 :       19
 2 :      427              12 :        7
 3 :      931              13 :        9
 4 :      561              14 :       11
 5 :      427              15 :        0
 6 :      268              16 :        1
 7 :      172              17 :        0
 8 :       74              18 :        0
 9 :       40              19 :        0
10 :       42              20 :        0
*/
