#pragma once

#include "vec2.hpp"
template <typename T> class Stack {
public:
  Stack(int size) : size(size), top(-1) { data = new T[size]; }
  ~Stack();
  bool Push(const T &t);

  // テンプレートのデフォルト引数を使って、Vec2型のPush関数を追加
  template <typename U = Vec2> bool Push(float x, float y) {
    return Push(U(x, y));
  }

  bool Pop(T &t);
  void Show() const;
  inline bool IsEmpty() const { return top == -1; }
  inline bool IsFull() const { return top == size - 1; }
  inline void Reset() { top = -1; }

private:
  T *data;
  int size;
  int top;
};
