/* 23 豊島圭吾
 * 第5回レポート プログラム2
 */

#include <stdio.h>
#include <limits.h>

int main(void) {
  int a[10], i;
  for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  int min = INT_MAX, max = 0;
  for (i = 0; i < 10; i++) {
    if (a[i] < min) min = a[i];
    if (max < a[i]) max = a[i];
  }

  printf("最大値 = %d 最小値 = %d\n", max, min);
	
  return 0;
}

/* 実行結果
1 2 5 10 3 8 7 4 9 6
最大値 = 10 最小値 = 1

1 2 3 4 5 6 7 8 9 10
最大値 = 10 最小値 = 1

10 9 8 7 6 5 4 3 2 1
最大値 = 10 最小値 = 1
 */
