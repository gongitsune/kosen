/* [2] 23 豊島圭吾 */

#include <stdio.h>

int main(void) {
  int n;
  double a[100];
  scanf("%d", &n);

  int i;
  for (i = 0; i < n; i++) scanf("%lf", &a[i]);
  
  int cnt = 0;
  for (i = 0; i < n; i++) if (a[i] < 0) cnt++;

  printf("負の数は%dつです\n", cnt);
  return 0;
}

/* 
6
1.3
15.6
-22.0
-14.1
9.2
-1.1
負の数は3つです
 */
