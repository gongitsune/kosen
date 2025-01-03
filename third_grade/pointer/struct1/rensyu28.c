#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  char name[20];
  struct node *next;
} NODE;

NODE *add(const char *, NODE *);
void show(NODE *);
void free_list(NODE *);

int main(void) {

  char data[20];
  NODE *head = NULL;

  while (scanf("%s", data) != EOF) {
    head = add(data, head);
  }

  show(head);
  free_list(head);

  return 0;
}

NODE *add(const char *d, NODE *h) {
  NODE *p = (NODE *)malloc(sizeof(NODE));
  strcpy(p->name, d);
  p->next = h;
  return p;
}

void show(NODE *p) {
  while (p != NULL) {
    printf("%s -> ", p->name);
    p = p->next;
  }
  printf("NULL\n");
}

void free_list(NODE *head) {
  NODE *next = head->next;
  free(head);
  if (next != NULL)
    free_list(next);
}

/** 実行結果
aaa
bbb
ccc
ccc -> bbb -> aaa -> NULL
 */
