/* 23 豊島圭吾
 * 課題集第5回目 プログラム2
 */

#include <math.h>
#include <stdio.h>

int main(void) {
  int a, b, i;
  printf("a = ");
  scanf("%d", &a);
  if (a == 1) {
    printf("1 は素数ではない\n");
    return 0;
  }

  i = 2;
  b = sqrt((double)a);
  while (((a % i) != 0) && (i <= b))
    i++;
  if (i > b)
    printf("%d は素数である\n", a);
  else
    printf("%d は素数ではない\n", a);

  return 0;
}

/* 実行結果 23 豊島圭吾
a = 17
17 は素数である
 */
