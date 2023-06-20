/* 23 豊島圭吾
 * 第4回レポート プログラム2
 */

#include <stdio.h>

int main(void) {
  int job, q, n;
  scanf("%d %d %d", &job, &q, &n);

  int r;
  switch (job) {
  case 0:
    switch (q) {
    case 0:
      if (n <= 5)
        r = 3000 * n + 100000;
      else
        r = 3000 * n + 110000;
      break;
    case 1:
      r = 3000 * n + 120000;
      break;
    case 2:
      r = 3000 * n + 130000;
      break;
    }
    break;
  case 1:
    switch (q) {
    case 0:
      r = 4000 * n + 150000;
      break;
    case 1:
      r = 4000 * n + 160000;
      break;
    case 2:
      r = 4000 * n + 170000;
      break;
    }
    break;
  case 2:
    switch (q) {
    case 0:
      r = 5000 * n + 200000;
      break;
    case 1:
      r = 5000 * n + 210000;
      break;
    case 2:
      r = 5000 * n + 220000;
      break;
    }
    break;
  case 3:
    switch (q) {
    case 0:
      r = 6000 * n + 250000;
      break;
    case 1:
      r = 6000 * n + 260000;
      break;
    case 2:
      r = 6000 * n + 270000;
      break;
    }
    break;
  }

  printf("職階     = %6d\n", job);
  printf("資格     = %6d\n", q);
  printf("勤続年数 = %6d\n", n);
  printf("給与     = %6d\n", r);

  return 0;
}

/* 実行結果 23 豊島圭吾
3 2 20
職階     =      3
資格     =      2
勤続年数 =     20
給与     = 390000
 */
