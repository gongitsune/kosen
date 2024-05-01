#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lcs(char *s1, char *s2) {
  // dp[i][j] : s1[i], s2[j]まで行った時の最長共通部分文字列とする

  // スタックがあふれそうなので...
  int len1 = strlen(s1), len2 = strlen(s2);
  int **dp = (int **)malloc(sizeof(int *) * (len1 + 1));
  for (int i = 0; i <= len1; i++) {
    dp[i] = (int *)malloc(sizeof(int) * (len2 + 1));
    for (int j = 0; j <= len2; j++) {
      dp[i][j] = 0;
    }
  }

  int max = 0;
  for (int i = 0; i < len1; i++) {
    for (int j = 0; j < len2; j++) {
      if (s1[i] == s2[j]) {
        if (i - 1 < 0 || j - 1 < 0) {
          dp[i][j] = 1;
        } else {
          dp[i][j] = dp[i - 1][j - 1] + 1;
        }

        if (dp[i][j] < dp[i + 1][j]) {
          dp[i + 1][j] = dp[i][j];
        }

        if (max < dp[i][j]) {
          max = dp[i][j];
        }
      }
    }
  }

  for (int i = 0; i <= len1; i++) {
    free(dp[i]);
  }
  free(dp);

  return max;
}

int main(void) {
  char file_name[100];
  printf("ファイル名 = ");
  scanf("%s", file_name);

  FILE *file;
  if ((file = fopen(file_name, "r")) == NULL) {
    printf("ファイルが開けませんでした\n");
    return 1;
  }

  char line1[4000 + 1], line2[4000 + 1];
  fscanf(file, "%s", line1);
  fscanf(file, "%s", line2);
  fclose(file);

  printf("最長共通部分列の長さ = %d\n", lcs(line1, line2));

  return 0;
}

/**
ファイル名 = 10data01.txt
最長共通部分列の長さ = 5

ファイル名 = 10data02.txt
最長共通部分列の長さ = 0

ファイル名 = 10data03.txt
最長共通部分列の長さ = 12

ファイル名 =10data04.txt
最長共通部分列の長さ = 31

ファイル名 = 10data06.txt
最長共通部分列の長さ = 3995

ファイル名 = 10data07.txt
最長共通部分列の長さ = 0
*/
