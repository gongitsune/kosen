#pragma once

typedef struct node {
  char name[20];
  struct node *next;
} NODE;

int find(char *d, NODE *head);
void show(NODE *);
void free_list(NODE **);
void insert(int, const char *, NODE **);
void delete_by_index(int n, NODE **);
void delete_by_name(const char *, NODE **);
int add_tail(char *, NODE **);
void del_from(int, NODE **);
int count(NODE *);
void set_data(int, char *, NODE *);