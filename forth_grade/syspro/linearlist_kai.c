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

  int n;
  printf("N=");
  scanf("%d", &n);
  if (n < 0 || n > 4) {
    printf("Nは0 <= N <= 4です。\n");
    return 0;
  }
  ptr = arr + n;

  while (ptr != NULL) {
    fprintf(stderr, "%d\n", ptr->data);
    ptr = ptr->next;
  }

  return 0;
}

/** 実行結果
1
2
3
4
5
N=3
4
5

*/
