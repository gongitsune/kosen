/* 23 豊島圭吾
 * 課題集第五回 プログラム4
 */

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int n, i, sum = 0;
  bool prime;
  for (n = 2; sum <= 1000; n++) {
    prime = true;
    for (i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
        prime = false;
        break;
      }
    }

    if (prime)
      sum += n;
  }

  printf("n = %d s = %d\n", n - 1, sum);

  return 0;
}
