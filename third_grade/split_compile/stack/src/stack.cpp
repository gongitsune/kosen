#include "stack.hpp"
#include <cassert>
#include <cmath>
#include <iostream>
#include <ostream>
#include <string>

void log(const std::string msg, const std::string name) {
  std::cout << "[" << name << "] " << msg << std::endl;
}

Stack::~Stack() { delete[] data; }

bool Stack::Push(const Vec2 &t) {
  if (IsFull()) {
    std::cerr << "Stack is full!" << std::endl;
    return false;
  }
  data[++top] = t;
  return true;
}

bool Stack::Push(float x, float y) { return Push(Vec2(x, y)); }

bool Stack::Pop(Vec2 &t) {
  if (IsEmpty()) {
    std::cerr << "Stack is empty!" << std::endl;
    return false;
  }

  t = data[top--];
  return true;
}

void Stack::Show() const {
  std::cout << "==== Stack ====" << std::endl;
  for (int i = 0; i <= top; ++i) {
    std::cout << i << ": " << data[i] << std::endl;
  }
  std::cout << "===============" << std::endl;
  std::cout << std::endl;
}
