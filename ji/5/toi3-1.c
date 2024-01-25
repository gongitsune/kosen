/* [1] 23 豊島圭吾 */

#include <stdio.h>
int main(void) {
  char class;
  int num;
  char dest[20];

  scanf("%c %d %s", &class, &num, dest);

  int over;
  if (class == 'F' && num > 3) {
    over = num - 3;
  } else if (class == 'B' && num > 2) {
    over = num - 2;
  } else if (class == 'E' && num > 1) {
    over = num - 1;
  }
  printf("クラス:%c, 個数:%d, 行先:%s, 超過料金:%d\n", class, num, dest,
         over * 5000);

  return 0;
}

/* 実行結果
F 2 Tokyo
クラス:F, 個数:2, 行先:Tokyo, 超過料金:0

E 4 Tokyo
クラス:E, 個数:4, 行先:Tokyo, 超過料金:15000
*/
