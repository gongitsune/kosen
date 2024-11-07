#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  char name[20];
  struct node *next;
} NODE;

NODE *add(const char *, NODE *);
void show(NODE *);
NODE *free_list(NODE *);
void insert(int, const char *, NODE **);
void delete_by_index(int n, NODE **);
void delete_by_name(const char *, NODE **);

int main(void) {
  char data[20];
  struct node *head = NULL;

  int loop = 1;
  while (loop) {
    printf("===========================\n");
    printf(" 1) ノードの追加\n");
    printf(" 2) 任意の位置にノード挿入\n");
    printf(" 3) 任意の位置のノード削除\n");
    printf(" 4) ノード名でノード削除\n");
    printf(" 5) 全ノード削除\n");
    printf(" 6) 終了\n");

    // リスト表示
    printf("現在のリスト: ");
    show(head);

    // コマンド入力
    int cmd;
    printf("どの処理を行いますか: ");
    scanf("%d", &cmd);

    // コマンド処理
    switch (cmd) {
    case 1:
      printf("入力データ: ");
      scanf("%s", data);
      head = add(data, head);
      show(head);
      break;
    case 2:
      printf("挿入するデータ: ");
      scanf("%s", data);
      printf("何番目の後に: ");
      int n;
      scanf("%d", &n);
      insert(n, data, &head);
      show(head);
      break;
    case 3:
      printf("何番目を削除する: ");
      int n2;
      scanf("%d", &n2);
      delete_by_index(n2, &head);
      show(head);
      break;
    case 4:
      printf("何を削除する: ");
      scanf("%s", data);
      delete_by_name(data, &head);
      show(head);
      break;
    case 5:
      head = free_list(head);
      show(head);
      break;
    case 6:
      loop = 0;
      break;
    }
  }

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

NODE *free_list(NODE *head) {
  if (head != NULL) {
    NODE *next = head->next;
    free(head);
    return free_list(next);
  }
  return head;
}

void insert(const int n, const char *data, NODE **p_head) {
  NODE *new_node = malloc(sizeof(NODE));
  strcpy(new_node->name, data);

  for (int i = 0; i < n; i++) {
    p_head = &((*p_head)->next);
  }

  new_node->next = *p_head;
  *p_head = new_node;
}

void delete_by_name(const char *data, NODE **p) {
  while ((*p) != NULL) {
    if (strcmp((*p)->name, data) == 0) {
      NODE *tmp = *p;
      *p = tmp->next;
      free(tmp);
    } else {
      p = &(*p)->next;
    }
  }
}

void delete_by_index(int n, NODE **p) {
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
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
現在のリスト: NULL
どの処理を行いますか: 1
入力データ: aaa
aaa -> NULL
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
現在のリスト: aaa -> NULL
どの処理を行いますか: 2
挿入するデータ: bbb
何番目の後に: 1
aaa -> bbb -> NULL
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
現在のリスト: aaa -> bbb -> NULL
どの処理を行いますか: 3
何番目を削除する: 1
bbb -> NULL
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
現在のリスト: bbb -> NULL
どの処理を行いますか: 1
入力データ: bbb
bbb -> bbb -> NULL
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
現在のリスト: bbb -> bbb -> NULL
どの処理を行いますか: 1
入力データ: aaa
aaa -> bbb -> bbb -> NULL
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
現在のリスト: aaa -> bbb -> bbb -> NULL
どの処理を行いますか: 4
何を削除する: bbb
aaa -> NULL
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
現在のリスト: aaa -> NULL
どの処理を行いますか: a
何を削除する: aaa -> NULL
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
現在のリスト: aaa -> NULL
どの処理を行いますか: 1
入力データ: bbb
bbb -> aaa -> NULL
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
現在のリスト: bbb -> aaa -> NULL
どの処理を行いますか: 5
NULL
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
現在のリスト: NULL
どの処理を行いますか: 6
 */
