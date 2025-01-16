#pragma once

#include <memory>

template <typename T> class LinkedList {
public:
  LinkedList() : head(nullptr), count(0) {}
  ~LinkedList() { clear(); }
  void show() const;
  void add(const T &data);
  void add_tail(const T &data);
  void insert(const int n, const T &data);
  void del(const int n);
  void del_data(const T &data);
  void clear();
  int get_count() const;

private:
  struct Node {
    T data;
    std::unique_ptr<Node> next;

    Node(const T &data) : data(data), next(nullptr) {}
  };

  std::unique_ptr<Node> head;
  int count;
};
