/* 23 豊島圭吾
 * 第2回レポート プログラム1
 */
#include <stdio.h>

int main(void) {
  int sanma, saba, kani;
  scanf("%d %d %d", &sanma, &saba, &kani);

  printf("秋刀魚 = %d匹\n", sanma);
  printf("鯖     = %d匹\n", saba); 
  printf("蟹     = %d匹\n", kani);
  printf("総額   = %d円\n", 120 * sanma + 230 * saba + 210 * kani); 
  return 0;
}

/* 実行結果 豊島圭吾
2 3 4
秋刀魚 = 2匹
鯖     = 3匹
蟹     = 4匹
総額   = 1770円
 */
