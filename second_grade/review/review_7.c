#include <stdio.h>

int main(void) {
  FILE *fp;
  char file_name[100];
  printf("ファイル名 = ");
  scanf("%s", file_name);

  if ((fp = fopen(file_name, "r")) == NULL) {
    printf("ファイルがオープンできませんでした。\n");
    return 1;
  }

  int n, m;
  fscanf(fp, "%d %d", &n, &m);

  int squares[n];
  for (int i = 0; i < n; i++) {
    fscanf(fp, "%d", &squares[i]);
  }

  int pos = 0;
  for (int i = 0; i < m; i++) {
    int dice;
    fscanf(fp, "%d", &dice);
    pos += dice;
    if (pos >= n - 1) {
      printf("%d回目でゴール\n", i + 1);
      break;
    }
    pos += squares[pos];
    if (pos >= n - 1) {
      printf("%d回目でゴール\n", i + 1);
      break;
    }
  }

  fclose(fp);
  return 0;
}

/*
ファイル名 = ./second_grade/review/review7_data/07data00.txt
5回目でゴール

ファイル名 = ./second_grade/review/review7_data/07data01.txt
14回目でゴール

ファイル名 = ./second_grade/review/review7_data/07data02.txt
5回目でゴール

ファイル名 = ./second_grade/review/review7_data/07data03.txt
400回目でゴール

ファイル名 = ./second_grade/review/review7_data/07data04.txt
156回目でゴール

ファイル名 = ./second_grade/review/review7_data/07data05.txt
238回目でゴール
*/
