#pragma once

#include "vec2.hpp"

class Stack {
public:
  Stack(int size) : size(size), top(-1) { data = new Vec2[size]; }
  ~Stack();
  bool Push(const Vec2 &t);
  bool Push(float x, float y);
  bool Pop(Vec2 &t);
  void Show() const;
  inline bool IsEmpty() const { return top == -1; }
  inline bool IsFull() const { return top == size - 1; }
  inline void Reset() { top = -1; }

private:
  Vec2 *data;
  int size;
  int top;
};
