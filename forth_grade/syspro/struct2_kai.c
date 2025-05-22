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
  p = friend + 2;
  for (i = 0; i < 3; i++) {
    fprintf(stderr, "p->name=%s\n", p->name);
    fprintf(stderr, "p->tel=%s\n", p->tel);
    fprintf(stderr, "p->age=%d\n", p->age);
    p--;
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

/** 実行結果
hanako
09088883333
21
taro
08033334444
13
okabe
07088881111
24
p->name=okabe
p->tel=07088881111
p->age=24
p->name=taro
p->tel=08033334444
p->age=13
p->name=hanako
p->tel=09088883333
p->age=21
p->name=hanako
p->tel=09088883333
p->age=21
p->name=taro
p->tel=08033334444
p->age=13
p->name=okabe
p->tel=07088881111
p->age=24
*/
