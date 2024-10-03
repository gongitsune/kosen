#include <stdio.h>
#include <stdlib.h>

typedef struct person {
  char name[20]; // 氏名
  int age;       // 年齢
  char sex[2];   // 性別
  double height; // 身長[cm]
  double weight; // 体重[kg]
  double BMI;    // BMI
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
    printf("氏名 年齢 性別(M\\F) 身長(cm) 体重(kg) = ");
    scanf("%s%d%s%lf%lf", seito[i].name, &seito[i].age, seito[i].sex,
          &seito[i].height, &seito[i].weight);
  }

  // BMIの計算
  for (i = 0; i < n; i++) {
    seito[i].BMI =
        seito[i].weight / (seito[i].height / 100 * seito[i].height / 100);
  }

  // 表示
  for (i = 0; i < n; i++) {
    printf("%-15s%3d%2s%6.1f%6.1f%6.1f\n", seito[i].name, seito[i].age,
           seito[i].sex, seito[i].height, seito[i].weight, seito[i].BMI);
  }

  free(seito);
  return 0;
}

/*
人数 = 2
氏名 年齢 性別(M\F) 身長(cm) 体重(kg) = aoki 34 M 187.3 43.2
氏名 年齢 性別(M\F) 身長(cm) 体重(kg) = kako 90 F 190.1 67.4
aoki            34 M 187.3  43.2  12.3
kako            90 F 190.1  67.4  18.7
*/