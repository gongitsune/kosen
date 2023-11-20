/* [3] 23 豊島圭吾 */

#include <stdio.h>

int main(void) {
  int mx[3][2];

  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      printf("mx[%d][%d]: ", i, j);
      scanf("%d", &mx[i][j]);
    }
  }
  printf("入力完了\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d ", mx[i][j]);
    }
    printf("\n");
  }
  printf("各行の合計\n");
  int sum;
  for (i = 0; i < 3; i++) {
    sum = 0;
    for (j = 0; j < 2; j++) sum += mx[i][j];
    printf("%d\n", sum);
  }
  return 0;
}

/*
mx[0][0]: 1
mx[0][1]: 2
mx[1][0]: 3
mx[1][1]: 4
mx[2][0]: 5
mx[2][1]: 6
入力完了
1 2 
3 4 
5 6 
各行の合計
3
7
11
 */
