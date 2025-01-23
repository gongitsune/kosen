#include "stack.hpp"
#include "vec2.hpp"
#include <cassert>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>

void log(const std::string msg, const std::string name) {
  std::cout << "[" << name << "] " << msg << std::endl;
}

template <typename T> Stack<T>::~Stack() { delete[] data; }

template <typename T> bool Stack<T>::Push(const T &t) {
  if (IsFull()) {
    std::cerr << "Stack is full!" << std::endl;
    return false;
  }
  data[++top] = t;
  return true;
}

template <typename T> bool Stack<T>::Pop(T &t) {
  if (IsEmpty()) {
    std::cerr << "Stack is empty!" << std::endl;
    return false;
  }

  t = data[top--];
  return true;
}

template <typename T> void Stack<T>::Show() const {
  std::cout << "     ┏━━━━━━━━━┓" << std::endl;
  for (int i = size - 1; i >= 0; --i) {
    std::cout << "[" << std::setw(2) << i << "] ┃ ";
    if (i <= top) {
      std::cout << data[i];
    } else {
      std::cout << "       ";
    }
    std::cout << " ┃";
    if (i == top) {
      std::cout << " <- top";
    }
    std::cout << std::endl;
  }
  std::cout << "     ┗━━━━━━━━━┛" << std::endl;
  std::cout << std::endl;
}

// 課題では定義と実装を分けることが求められているため、明示的なインスタンス化を行う
template class Stack<Vec2>;
template class Stack<float>;
