/* 23 豊島圭吾
 * 第5回レポート プログラム3
 */

#include <stdio.h>
#include <math.h>

int main(void) {
  int a[10], i;
  for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  double sum = 0;
  for (i = 0; i < 10; i++) sum += a[i];
  double ave = sum / 10;
  
  sum = 0;
  for (i = 0; i < 10; i++) {
    sum += pow(a[i] - ave, 2);
  }

  printf("標準偏差 = %.6f\n", sqrt(sum / 10));
	
  return 0;
}

/* 実行結果
1 2 3 4 5 6 7 8 9 10
標準偏差 = 2.872281
 */
