#include <stdio.h>
#include <stdlib.h>

typedef struct person {
  char name[20]; // 氏名
  int age;       // 年齢
  char sex[2];   // 性別
  double height; // 身長[cm]
  double weight; // 体重[kg]
} PERSON;

int main(void) {
  int n;
  printf("人数 = ");
  scanf("%d", &n);

  PERSON *seito;
  seito = (PERSON *)malloc(n * sizeof(PERSON));

  int i;

  // 入力
  for (i = 0; i < n; i++) {
    printf("氏名 年齢 性別 身長 体重 = ");
    scanf("%s%d%s%lf%lf", seito[i].name, &seito[i].age, seito[i].sex,
          &seito[i].height, &seito[i].weight);
  }

  // 表示
  for (i = 0; i < n; i++) {
    printf("%-15s%3d%2s%6.1f%6.1f\n", seito[i].name, seito[i].age, seito[i].sex,
           seito[i].height, seito[i].weight);
  }

  return 0;
}