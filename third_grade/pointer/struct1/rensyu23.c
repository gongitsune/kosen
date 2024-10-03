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

int main(void) {
  printf("A_PERSON : %llu bytes\n", sizeof(A_PERSON));
  printf("P_PERSON : %llu bytes\n", sizeof(P_PERSON));

  return 0;
}

/*
A_PERSON : 115 bytes
P_PERSON : 24 bytes
*/