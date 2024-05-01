/* 23 豊島圭吾
 * 第4回レポート プログラム1
 */

#include <stdio.h>

int main(void) {
  int job, n;
  scanf("%d %d", &job, &n);

  printf("職階     = %6d\n", job);
  printf("勤続年数 = %6d\n", n);

  int r;
  switch (r) {
  case 0:
    if (n <= 5)
      r = 3000 * n + 100000;
    else
      r = 3500 * n + 100000;
    break;
  case 1:
    if (n <= 7)
      r = 4000 * n + 160000;
    else
      r = 4500 * n + 160000;
    break;
  case 2:
    r = 5000 * n + 200000;
    break;
  case 3:
    r = 6000 * n + 250000;
    break;
  }

  printf("給与     = %6d\n", r);

  return 0;
}
