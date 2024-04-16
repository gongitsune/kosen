#include <stdio.h>

int main(void) {
  int buy, pay;
  printf("購入金額 = ");
  scanf("%d", &buy);
  printf("支払金額 = ");
  scanf("%d", &pay);

  if (buy > pay) {
    printf("お金が足りません\n");
    return 1;
  }

  int change = pay - buy;
  printf("%d円のおつりです\n", change);

  int coins[] = {500, 100, 50, 10, 5, 1};
  for (int i = 0; i < 6; i++) {
    int num = change / coins[i];
    change %= coins[i];
    if (num > 0)
      printf("%d円玉=%d枚\n", coins[i], num);
  }
  return 0;
}

/* 実行結果
購入金額 = 832
支払金額 = 902
70円のおつりです
50円玉=1枚
10円玉=2枚

購入金額 = 120
支払金額 = 5000
4880円のおつりです
500円玉=9枚
100円玉=3枚
50円玉=1枚
10円玉=3枚

購入金額 = 270
支払金額 = 200
お金が足りません
*/
