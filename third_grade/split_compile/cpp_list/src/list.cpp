#define DEBUG

#include "list.hpp"
#include <iostream>
#include <string>

void log_debug(std::string msg, std::string source) {
#ifdef DEBUG
  std::cout << "[" << source << "] " << msg << std::endl;
#endif // DEBUG
}

template <typename T> void LinkedList<T>::show() const {
  // ここは生ポインタで...
  Node *curr = head.get();
  while (curr != nullptr) {
    std::cout << curr->data << " -> ";
    curr = curr->next.get();
  }
  std::cout << "NULL" << std::endl;
}

template <typename T> void LinkedList<T>::add(const T &data) {
  insert(0, data);
}

template <typename T> void LinkedList<T>::add_tail(const T &data) {
  insert(count, data);
}

template <typename T> void LinkedList<T>::insert(const int n, const T &data) {
  if (n < 0 || n > count) {
    std::cerr << n << " is invalid index." << std::endl;
    return;
  }

  auto new_node = std::make_unique<Node>(data);
  auto p_head = &this->head;
  for (int i = 0; i < n; i++) {
    Node *curr = p_head->get();
    p_head = &curr->next;
  }

  new_node->next = std::move(*p_head);
  *p_head = std::move(new_node);
  count++;

  log_debug("Inserted at " + std::to_string(n), "LinkedList::insert");
}

template <typename T> void LinkedList<T>::del(const int n) {
  if (n < 1 || n > count) {
    std::cerr << n << " is invalid index." << std::endl;
    return;
  }

  auto p_head = &this->head;
  for (int i = 0; i < n - 1; i++) {
    Node *curr = p_head->get();
    p_head = &curr->next;
  }

  *p_head = std::move((*p_head)->next);
  count--;

  log_debug("Deleted at " + std::to_string(n), "LinkedList::del");
}

template <typename T> void LinkedList<T>::del_data(const T &data) {
  auto p_head = &this->head;
  while (*p_head != nullptr) {
    if ((*p_head)->data == data) {
      *p_head = std::move((*p_head)->next);
      count--;
      log_debug("Deleted by data", "LinkedList::del_data");
      return;
    }
    p_head = &(*p_head)->next;
  }

  std::cerr << data << " is not found." << std::endl;
}

template <typename T> void LinkedList<T>::clear() {
  while (count > 0) {
    del(1);
  }
  log_debug("Cleared", "LinkedList::clear");
}

template <typename T> int LinkedList<T>::get_count() const { return count; }

// Explicit instantiation
// 課題でファイルを分割する必要があるため、明示的インスタンス化を行う
template class LinkedList<int>;
template class LinkedList<std::string>;

/*
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
*/
