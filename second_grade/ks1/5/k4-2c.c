/* 23 豊島圭吾
 * 課題集第五回 プログラム4
 */

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int n, i, b, sum = 0;

  for (n = 2; sum <= 1000; n++) {
    i = 2;
    b = sqrt(n);
    while (n % i != 0 && i <= b)
      i++;

    if (i > b)
      sum += n;
  }

  printf("n = %d s = %d\n", n - 1, sum);

  return 0;
}

/* 実行結果 23 豊島圭吾
n = 97 s = 1060
 */
