/* [4] 23 豊島圭吾 */

#include <math.h>
#include <stdio.h>

double tyuku(double height, double out_radius, double in_radius);
double entyu(double height, double radius);

int main(void) {
  double height, r1, r2;

  scanf("%lf%lf%lf", &height, &r1, &r2);
  printf("%.2f\n", tyuku(height, r1, r2));

  return 0;
}

double tyuku(double height, double out_radius, double in_radius) {
  return entyu(height, out_radius) - entyu(height, in_radius);
}

double entyu(double height, double radius) {
  return height * radius * radius * M_PI;
}

/* 実行結果
8.0 4.0 2.0
301.59
*/
