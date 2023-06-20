/* 23 豊島圭吾
 * 第5回レポート プログラム4
 */

#include <stdio.h>
#include <limits.h>

int main(void) {
  int a[10], i;

  for (i = 0; i < 10; i++) scanf("%d", &a[i]);

  int max[2];
  max[0] = a[0];
  max[1] = INT_MIN;

  for (i = 2; i < 10; i++) {
    if (max[0] < a[i]) {
      max[1] = max[0];
      max[0] = a[i];
    } else if (max[1] < a[i]) {
      max[1] = a[i];
    }
  }

  printf("1番目 = %d 2番目 = %d\n", max[0], max[1]);
	
  return 0;
}

/* 実行結果
1 2 5 10 3 8 7 4 9 6
1番目 = 10 2番目 = 9
 */
