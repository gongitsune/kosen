#include <stdio.h>
#include <stdlib.h>

typedef struct a_person {
  char name[20];    // 氏名
  char address[80]; // 住所
  char phone[15];   // 電話番号
} A_PERSON;

typedef struct p_person {
  char *name;    // 名前
  char *address; // 住所
  char *phone;   // 電話番号
} P_PERSON;

char *mystrdup(const char *s) {
  char *p = malloc(strlen(s) + 1);
  if (p)
    strcpy(p, s);
  return p;
}

int main(void) {
  P_PERSON p = {"aoki", "mitoyo", "090XXXX"};
  P_PERSON q;

  q.name = mystrdup(p.name);
  q.address = mystrdup(p.address);
  q.phone = mystrdup(p.phone);

  printf("name    : %s\n", q.name);
  printf("address : %s\n", q.address);
  printf("phone   : %s\n", q.phone);

  printf("\n");
  printf("p.name   : %p, p2.name   : %p\n", p.name, q.name);
  printf("p.address: %p, p2.address: %p\n", p.address, q.address);
  printf("p.phone  : %p, p2.phone  : %p\n", p.phone, q.phone);

  free(q.name);
  free(q.address);
  free(q.phone);

  return 0;
}

/*
name    : aoki
address : mitoyo
phone   : 090XXXX

p.name   : 00007FF743FB5000, p2.name   : 0000020736FAFFB0
p.address: 00007FF743FB5008, p2.address: 0000020736FA2A70
p.phone  : 00007FF743FB5010, p2.phone  : 0000020736FA9140
*/