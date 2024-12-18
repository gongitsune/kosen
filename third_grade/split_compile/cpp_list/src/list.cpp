#include "list.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find(const char *d, NODE *head) {
  int n = 1;
  while (head != NULL) {
    if (strcmp(head->name, d) == 0) {
      return n;
    }
    head = head->next;
    n++;
  }

  return -1;
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

void free_list(NODE **head) {
  if (*head != NULL)
    free_list(&(*head)->next);
  free(*head);
  *head = NULL;
}

void insert(const int n, const char *data, NODE **p_head) {
  NODE *new_node = (NODE *)malloc(sizeof(NODE));
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

int add_tail(const char *d, NODE **head) {
  int n = 1;
  NODE *new_node = (NODE *)malloc(sizeof(NODE));
  strcpy(new_node->name, d);
  new_node->next = NULL;

  while (*head != NULL) {
    head = &(*head)->next;
    n++;
  }

  *head = new_node;
  return n;
}

void del_from(int n, NODE **head) {
  int i = 1;
  while (*head != NULL) {
    NODE *tmp = *head;

    if (i >= n) {
      *head = tmp->next;
      free(tmp);
    } else {
      head = &tmp->next;
    }
    i++;
  }
}

int count(NODE *head) {
  int n = 0;
  while (head != NULL) {
    n++;
    head = head->next;
  }
  return n;
}

void set_data(int n, const char *data, NODE *head) {
  if (n <= 0) {
    fprintf(stderr, "%d is invalid index.\n", n);
    return;
  }
  if (head == NULL) {
    fprintf(stderr, "List is empty.\n");
    return;
  }
  for (int i = 1; i < n; i++) {
    head = head->next;
    if (head == NULL) {
      fprintf(stderr, "%d is invalid index.\n", n);
      return;
    }
  }
  strcpy(head->name, data);
}