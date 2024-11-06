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
void delete(int, NODE **);

int main(void) {
  char data[20];
  struct node *head = NULL;
  int n;

  // while (scanf("%s", data) != EOF) {
  //   head = add(data, head);
  // }
  head = add("aaa", head);
  head = add("bbb", head);
  head = add("ccc", head);

  show(head); /* 挿入前のノードの表示 */
  // printf("挿入するデータ : ");
  // scanf("%s", data);
  // printf("何番目の後に : ");
  // scanf("%d", &n);
  // insert(n, data, &head); /* ノードの挿入 */
  // show(head);             /* 挿入後のノードの表示 */

  printf("何番目を削除する : ");
  scanf("%d", &n);
  delete (n, &head);
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

void insert(const int n, const char *data, NODE **p_head) {
  if (n < 0) {
    fprintf(stderr, "%d is invalid index.\n", n);
    return;
  }
  for (int i = 0; i < n; i++) {
    p_head = &(*p_head)->next;
  }

  NODE *new_node = malloc(sizeof(NODE));
  strcpy(new_node->name, data);

  new_node->next = *p_head;
  *p_head = new_node;
}

void delete(int n, NODE **p) {
  if (n < 1) {
    fprintf(stderr, "%d is invalid index.\n", n);
    return;
  }
  for (int i = 0; i < n - 1; i++) {
    if ((*p)->next == NULL) {
      fprintf(stderr, "%d is invalid index.\n", n);
      return;
    }

    p = &(*p)->next;
  }

  NODE *tmp = *p;
  *p = tmp->next;
  free(tmp);
}

/** 実行結果
ccc -> bbb -> aaa -> NULL
何番目を削除する : 2
ccc -> aaa -> NULL
 */
