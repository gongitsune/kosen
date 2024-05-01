/* 23 豊島圭吾
 * 第3回レポート プログラム1
 */

#include <stdio.h>

int main(void) {
  int a;
  printf("a = ");
  scanf("%d", &a);
  if (a < 0 || a > 100) {
    printf("入力値は0以上100以下にしてください\n");
  }
  if (a >= 80)
    printf("優\n");
  else if (a >= 70)
    printf("良\n");
  else if (a >= 60)
    printf("可\n");
  else
    printf("不可\n");

  return 0;
}

/* 実行結果
a = 73
良

a = 91
優
 */
