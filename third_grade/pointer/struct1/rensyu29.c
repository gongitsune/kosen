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
void insert(int, const char *, NODE **);

int main(void) {
  char data[20];
  struct node *head = NULL;
  int n;

  while (scanf("%s", data) != EOF) {
    head = add(data, head);
  }

  show(head); /* 挿入前のノードの表示 */
  printf("挿入するデータ : ");
  scanf("%s", data);
  printf("何番目の後に : ");
  scanf("%d", &n);
  insert(n, data, &head); /* ノードの挿入 */
  show(head);             /* 挿入後のノードの表示 */

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

void insert(int n, const char *data, NODE **p) {
  if (n == 0) {
    *p = add(data, *p);
    return;
  }

  int i;
  NODE *x;

  x = (NODE *)malloc(sizeof(NODE));
  strcpy(x->name, data);

  NODE *c = *p;
  for (i = 0; i < n - 1; i++)
    c = c->next;
  x->next = c->next;
  c->next = x;
}

/** 実行結果
aoki kana hiro
hiro
kana
aoki
NULL
 */