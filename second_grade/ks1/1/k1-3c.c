/* 23 豊島圭吾
 * 第2回レポート プログラム4
 */

#include <stdio.h>

int main(void) {
  int apple, people;
  scanf("%d %d", &apple, &people);
  printf("林檎の個数 = %d 個\n", apple);
  printf("人数       = %d 人\n", people);
  printf("一人当たり = %lf 個\n", (double)apple / (double)people);

  return 0;
}

/* 実行結果 豊島圭吾
7 8
林檎の個数 = 7 個
人数       = 8 人
一人当たり = 0.875000 個 
 */
