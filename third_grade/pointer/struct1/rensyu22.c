#include <stdalign.h>
#include <stdio.h>

typedef struct person {
  char name[20]; // 氏名
  int age;       // 年齢
  char sex[2];   // 性別
  double height; // 身長[cm]
  double weight; // 体重[kg]
  double BMI;    // BMI
} PERSON;

int main(void) {
  PERSON seito;

  printf("PERSON : %lu bytes\n", sizeof(PERSON));
  printf("name   : %p\n", seito.name);
  printf("age    : %p\n", &seito.age);
  printf("sex    : %p\n", seito.sex);
  printf("height : %p\n", &seito.height);
  printf("weight : %p\n", &seito.weight);
  printf("BMI    : %p\n", &seito.BMI);

  // printf("\nOFFSET\n");
  // printf("name   : %llu\n", offsetof(PERSON, name));
  // printf("age    : %llu\n", offsetof(PERSON, age));
  // printf("sex    : %llu\n", offsetof(PERSON, sex));
  // printf("height : %llu\n", offsetof(PERSON, height));
  // printf("weight : %llu\n", offsetof(PERSON, weight));
  // printf("BMI    : %llu\n", offsetof(PERSON, BMI));

  return 0;
}

/*
PERSON : 56 bytes
name   : 00000002841FFBB0
age    : 00000002841FFBC4
sex    : 00000002841FFBC8
height : 00000002841FFBD0
weight : 00000002841FFBD8
BMI    : 00000002841FFBE0
*/
