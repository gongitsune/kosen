/* 23 豊島圭吾
 * 第2回レポート プログラム6
 */

#include <stdio.h>
#include <math.h>

int main(void) {
  printf("sin(0.0)    = %.3lf\n", sin(0));
  printf("sin(pi/6.0) = %.3lf\n", sin(M_PI / 6.0));
  printf("sin(pi/3.0) = %.3lf\n", sin(M_PI / 3.0));
  printf("sin(pi/2.0) = %.3lf\n", sin(M_PI / 2.0));
  printf("sin(pi)     = %.3lf\n", sin(M_PI));
  printf("sin(pi*2.0) = %.3lf\n", sin(M_PI * 2.0));

  return 0;
}

/* 実行結果 豊島圭吾
sin(0.0)    = 0.000
sin(pi/6.0) = 0.500
sin(pi/3.0) = 0.866
sin(pi/2.0) = 1.000
sin(pi)     = 0.000
sin(pi*2.0) = -0.000
 */
