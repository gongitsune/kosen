#include <stdio.h>

void sort(int a[], int n);
int read_score(FILE *fp);

int main(void) {
  char file_name[100];
  printf("ファイル名 = ");
  scanf("%s", file_name);

  FILE *fp;
  if ((fp = fopen(file_name, "r")) == NULL) {
    printf("ファイルがオープンできませんでした。\n");
    return 1;
  }

  int w = read_score(fp);
  int k = read_score(fp);
  fclose(fp);
  
  printf("W大学 = %d点\n", w);
  printf("K大学 = %d点\n", k);
  if (w > k) {
    printf("W大学の勝利\n");
  } else if (w < k) {
    printf("K大学の勝利\n");
  } else {
    printf("引き分け\n");
  }

  return 0;
}

void sort(int a[], int n) {
  int max, index, i, j;

  for (i = 0; i < n; i++) {
    max = a[i];
    index = i;
    for (j = i + 1; j < n; j++) {
      if (a[j] > max) {
        max = a[j];
        index = j;
      }
    }
    a[index] = a[i];
    a[i] = max;
  }
}

int read_score(FILE *fp) {
  int scores[10];
  for (int i = 0; i < 10; i++) {
    fscanf(fp, "%d", &scores[i]);
  }
  sort(scores, 10);
  return scores[0] + scores[1] + scores[2];
}

/**
ファイル名 = 08data01.txt
W大学 = 66点
K大学 = 61点
W大学の勝利

ファイル名 = 08data02.txt    
W大学 = 240点
K大学 = 250点
K大学の勝利

ファイル名 = 08data03.txt
W大学 = 283点
K大学 = 293点
K大学の勝利

ファイル名 = 08data04.txt
W大学 = 259点
K大学 = 259点
引き分け

ファイル名 = 08data05.txt
W大学 = 259点
K大学 = 224点
W大学の勝利
*/
