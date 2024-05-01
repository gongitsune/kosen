/* 23 豊島圭吾
 * 第5回レポート プログラム1
 */

#include <stdio.h>

int main(void) {
  int a[10];
  int i;

  for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  int sum = 0;
  for (i = 0; i < 10; i++) {
    sum += a[i];
  }

  printf("合計 = %d 平均 = %.2f\n", sum, (double)sum / 10);
	
  return 0;
}

/* 実行結果
1 2 3 4 5 6 7 8 9 10
合計 = 55 平均 = 5.50
 */
