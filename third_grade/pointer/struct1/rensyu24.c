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
  P_PERSON p;
  p.name = mystrdup("aoki");
  p.address = mystrdup("mitoyo");
  p.phone = mystrdup("090XXXX");

  printf("name    : %s\n", p.name);
  printf("address : %s\n", p.address);
  printf("phone   : %s\n", p.phone);

  free(p.name);
  free(p.address);
  free(p.phone);

  return 0;
}

/*
name    : aoki
address : mitoyo
phone   : 090XXXX
*/