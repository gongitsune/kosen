/* 23 豊島圭吾
 * 第2回レポート プログラム2
 */

#include <stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("クラスの人数     = %d 人\n", a);
  printf("野球のチーム数   = %d チーム\n", b);
  printf("バレーのチーム数 = %d チーム\n", c);
  printf("参加できない人数 = %d 人\n", a - b * 9 - c * 6); 
  return 0;
}

/* 実行結果 豊島圭吾
40 2 3
クラスの人数     = 40 人
野球のチーム数   = 2 チーム
バレーのチーム数 = 3 チーム
参加できない人数 = 4 人
 */
