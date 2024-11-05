#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int malloc_count = 0;
int free_count = 0;

char *mystrdup(const char *s) {
  char *p = malloc(strlen(s) + 1);
  if (p)
    strcpy(p, s);

  printf("malloc %p\n", p);
  malloc_count++;
  return p;
}

void freemember(P_PERSON *p) {
  printf("free(name)    %p\n", p->name);
  printf("free(address) %p\n", p->address);
  printf("free(phone)   %p\n", p->phone);

  free(p->name);
  free(p->address);
  free(p->phone);

  free_count += 3;
}

int main(void) {
  P_PERSON p;

  p.name = mystrdup("aoki");
  p.address = mystrdup("mitoyo");
  p.phone = mystrdup("090XXXX");

  printf("name    : %s\n", p.name);
  printf("address : %s\n", p.address);
  printf("phone   : %s\n", p.phone);

  freemember(&p);

  printf("\n");
  printf("malloc_count : %d\n", malloc_count);
  printf("free_count   : %d\n", free_count);

  return 0;
}

/*
malloc 00000216F8A0AFB0
malloc 00000216F8A05860
malloc 00000216F8A05880
name    : aoki
address : mitoyo
phone   : 090XXXX
free(name)    00000216F8A0AFB0
free(address) 00000216F8A05860
free(phone)   00000216F8A05880

malloc_count : 3
free_count   : 3
*/
