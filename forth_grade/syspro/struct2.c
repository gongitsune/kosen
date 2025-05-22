#include <stdio.h>

struct denwacho {
  char name[40];
  char tel[12];
  int age;
};

int main() {
  struct denwacho friend[3], *p;
  int i;
  p = friend;
  for (i = 0; i < 3; i++) {
    scanf("%s", p->name);
    scanf("%s", p->tel);
    scanf("%d", &p->age);
    p++;
  }
  p = friend;
  for (i = 0; i < 3; i++) {
    fprintf(stderr, "p->name=%s\n", p->name);
    fprintf(stderr, "p->tel=%s\n", p->tel);
    fprintf(stderr, "p->age=%d\n", p->age);
    p++;
  }
  return 0;
}
