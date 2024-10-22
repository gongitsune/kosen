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

void structfree(P_PERSON *p, int n) {
  for (int i = 0; i < n; i++) {
    freemember(p + i);
  }
}

int main(void) {
  P_PERSON *p;
  int n = 5;

  p = malloc(sizeof(P_PERSON) * n);
  p->name = mystrdup("aoki");
  p->address = mystrdup("mitoyo");
  p->phone = mystrdup("090XXXX");

  (p + 1)->name = mystrdup("kana");
  (p + 1)->address = mystrdup("mino");
  (p + 1)->phone = mystrdup("080XXXX");

  (p + 2)->name = mystrdup("sato");
  (p + 2)->address = mystrdup("kagawa");
  (p + 2)->phone = mystrdup("070XXXX");

  (p + 3)->name = mystrdup("taro");
  (p + 3)->address = mystrdup("tokyo");
  (p + 3)->phone = mystrdup("060XXXX");

  (p + 4)->name = mystrdup("hanako");
  (p + 4)->address = mystrdup("osaka");
  (p + 4)->phone = mystrdup("050XXXX");

  for (int i = 0; i < n; i++) {
    printf("name    : %s\n", (p + i)->name);
    printf("address : %s\n", (p + i)->address);
    printf("phone   : %s\n", (p + i)->phone);
    printf("\n");
  }

  structfree(p, n);

  printf("malloc_count : %d\n", malloc_count);
  printf("free_count   : %d\n", free_count);

  return 0;
}

/*
malloc 00000189CCFFAFB0
malloc 00000189CCFF58E0
malloc 00000189CCFF5900
malloc 00000189CCFF5920
malloc 00000189CCFF5940
malloc 00000189CCFF5960
malloc 00000189CCFF5980
malloc 00000189CCFF59A0
malloc 00000189CCFF59C0
malloc 00000189CCFF59E0
malloc 00000189CCFF5A00
malloc 00000189CCFF5A20
malloc 00000189CCFF5A40
malloc 00000189CCFF5A60
malloc 00000189CCFF5C50
name    : aoki
address : mitoyo
phone   : 090XXXX

name    : kana
address : mino
phone   : 080XXXX

name    : sato
address : kagawa
phone   : 070XXXX

name    : taro
address : tokyo
phone   : 060XXXX

name    : hanako
address : osaka
phone   : 050XXXX

free(name)    00000189CCFFAFB0
free(address) 00000189CCFF58E0
free(phone)   00000189CCFF5900
free(name)    00000189CCFF5920
free(address) 00000189CCFF5940
free(phone)   00000189CCFF5960
free(name)    00000189CCFF5980
free(address) 00000189CCFF59A0
free(phone)   00000189CCFF59C0
free(name)    00000189CCFF59E0
free(address) 00000189CCFF5A00
free(phone)   00000189CCFF5A20
free(name)    00000189CCFF5A40
free(address) 00000189CCFF5A60
free(phone)   00000189CCFF5C50
malloc_count : 15
free_count   : 15
*/