/* [6] 23 豊島圭吾 */

#include <stdio.h>

int main(void) {
  int p;
  scanf("%d", &p);

  int a[10];
  a[0] = 1;

  int i;
  for (i = 1; i < 10; i++) {
    a[i] = a[i - 1] * (i + 1); 
  }

  int cnt = 0;
  i = 9;
  while (p > 0) {
    if (p >= a[i]) {
      p -= a[i];
      cnt++;
    } else {
      i--;
    }
  }

  printf("%d\n", cnt);

  return 0;
}

/*
9
3

119
10

1000000
26

10000000
24
 */
