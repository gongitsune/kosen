/* [1] 23 豊島圭吾 */

#include <stdio.h>

int main(void) {
  int a[] = {0,2,4,5,6,8};
  int i, j, r;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 6; j++) {
      r = i * 10 + a[j];
      if (r >= 6) printf("%d ", r);
    }
  }
  printf("\n");

  return 0;
}

/*
6 8 10 12 14 15 16 18 20 22 24 25 26 28 30 32 34 35 36 38 40 42 44 45 46 48 
 */
