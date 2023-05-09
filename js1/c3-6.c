/* 23 豊島圭吾
 * 第3回レポート 挑戦的課題プログラム6
 */

#include <stdio.h>

int judge_bmi(double bmi) {
  printf("BMI(%lf)は ", bmi);

  if (bmi < 16.0) {
    printf("痩せすぎ");
  } else if (bmi < 17.0) {
    printf("痩せ");
  } else if (bmi < 18.5) {
    printf("痩せ気味");
  } else if (bmi < 25.0) {
    printf("普通体重");
  } else if (bmi < 30.0) {
    printf("前肥満");
  } else if (bmi < 35.0) {
    printf("肥満(1度)");
  } else if (bmi < 40.0) {
    printf("肥満(2度)");
  } else {
    printf("肥満(3度)");
  }

  printf(" です\n");

  return 0;
}

int main(void) {
  double h, w;
  printf("height(m) = ");
  scanf("%lf", &h);
  printf("weight(kg) = ");
  scanf("%lf", &w);

  double bmi = w / (h * h);
  // printf("BMI = %lf\n", bmi);
  judge_bmi(bmi);

  printf("\n基礎代謝量の計算\n");
  int age, sex;
  printf("age = ");
  scanf("%d", &age);
  printf("sex(male: 0, female: 1) = ");
  scanf("%d", &sex);

  // convert m to cm
  h *= 100;
  if (sex == 0) {
    printf("基礎代謝量 = %lf\n",
           66.5 + (13.75 * w) + (5.003 * h) - (6.775 * age));
  } else if (sex == 1) {
    printf("基礎代謝量 = %lf\n",
           655.1 + (9.563 * w) + (1.850 * h) - (4.676 * age));
  }

  return 0;
}

/* 実行結果
height(m) = 1.72
weight(kg) = 52
BMI(17.577069)は 痩せ気味 です

基礎代謝量の計算
age = 16
sex(male: 0, female: 1) = 0
基礎代謝量 = 1533.616000
 */
