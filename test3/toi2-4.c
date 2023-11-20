/* [4] 23 豊島圭吾 */

#include <stdio.h>

int main(void) {
  int a[10];
  int i;
  for (i = 0; i < 10; i++) scanf("%d", &a[i]);

  int n1, n2;
  printf("入れ替える配列の要素番号を入力せよ:");
  scanf("%d%d", &n1, &n2);
  
  int tmp;
  tmp = a[n1];
  a[n1] = a[n2];
  a[n2] = tmp;

  for (i = 0; i < 10; i++) printf("%d ", a[i]);
  printf("\n");
  return 0;
}

/*
4 0 6 1 2 9 3 8 7 5
入れ替える配列の要素番号を入力せよ:3 6
4 0 6 3 2 9 1 8 7 5 
 */
