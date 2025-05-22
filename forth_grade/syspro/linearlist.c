#include <stdio.h>
struct linear {
  int data;
  struct linear *next;
};

int main() {
  int i;
  struct linear arr[5], *ptr, *curr;
  ptr = arr;
  for (i = 0; i < 5; i++) {
    scanf("%d", &ptr->data);
    curr = ptr;
    curr->next = ++ptr;
  }
  curr->next = NULL;

  ptr = arr;

  while (ptr != NULL) {
    fprintf(stderr, "%d\n", ptr->data);
    ptr = ptr->next;
  }

  return 0;
}
