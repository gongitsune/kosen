#include <stdio.h>

struct point {
  double x;
  double y;
};

int main(void) {
  struct point a, b = {300, 400};

  a.x = 100;
  a.y = 200;

  printf("(%f, %f)\n", a.x, a.y);
  printf("(%f, %f)\n", b.x, b.y);

  return 0;
}
