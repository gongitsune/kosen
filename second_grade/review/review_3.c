#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char file_name[100];
  printf("入力ファイル = ");
  scanf("%s", file_name);

  FILE *fp;
  if ((fp = fopen(file_name, "r")) == NULL) {
    printf("ファイルが開けません\n");
    return 1;
  }

  int n;
  fscanf(fp, "%d", &n);

  int *submits = (int *)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    submits[i] = 0;
  }
  int s;
  while (fscanf(fp, "%d", &s) != EOF) {
    submits[s - 1] = 1;
  }

  fclose(fp);

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (submits[i] == 0)
      cnt++;
  }

  if (cnt == 0) {
    printf("全員が提出しています\n");
    return 0;
  }
  printf("以下の%d名が未提出です\n", cnt);
  for (int i = 0; i < n; i++) {
    if (submits[i] == 0)
      printf("%d番\n", i + 1);
  }

  free(submits);

  return 0;
}

/*
入力ファイル = data1.txt
以下の3名が未提出です
1番
30番
39番

入力ファイル = data2.txt
全員が提出しています
*/
