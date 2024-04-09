/* 23 豊島圭吾
 * 第2回レポート プログラム7
 */

#include <stdio.h>
#include <math.h>

int main(void) {
  printf("tan(-pi/3.0) = %.3lf\n", tan(-M_PI/3.0));
  printf("tan(-pi/6.0) = %.3lf\n", tan(-M_PI/6.0));
  printf("tan( 0.0)    =  %.3lf\n", tan(0.0));
  printf("tan( pi/6.0) =  %.3lf\n", tan(M_PI/6.0));
  printf("tan( pi/3.0) =  %.3lf\n", tan(M_PI/3.0));
  return 0;
}

/* 実行結果 豊島圭吾
tan(-pi/3.0) = -1.732
tan(-pi/6.0) = -0.577
tan( 0.0)    =  0.000
tan( pi/6.0) =  0.577
tan( pi/3.0) =  1.732
 */
