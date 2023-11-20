/* [5] 23 豊島圭吾 */

#include <stdio.h>

int main(void) {
  int n = 1;
  double s = 0, ni;

  while (s < 19.5) {
    ni = 1.0 / n;
    s += ni;
    n++;
  }

  printf("n   =%d\n", n - 1);
  printf("s   =%18.15f\n", s);
  printf("1/n =%18.15f\n", ni);

  return 0;
}

/*
n   =165219316
s   =19.500000005083898
1/n = 0.000000006052561
 */
