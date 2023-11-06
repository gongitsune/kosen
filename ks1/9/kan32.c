/* 23 豊島圭吾
 * 第9回レポート プログラム7
 */

#include <stdio.h>

void print_pattern2(int n);

int main(void) {
  int n;
  printf("n = ");
  scanf("%d", &n);
  print_pattern2(n);
}

void print_pattern2(int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("++--\n");
  }
}

/* 実行結果 23 豊島圭吾
n = 4
++--
++--
++--
++--
*/
