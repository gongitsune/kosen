#include "stack.hpp"
#include "vec2.hpp"
#include <cassert>
#include <iostream>
#include <vector>

void test();
Vec2 random_vec2() { return Vec2(rand() % 10, rand() % 10); }

int main(void) {
  srand(time(NULL));

  Stack<Vec2> s(5);

  bool loop = true;
  while (loop) {
    s.Show();

    std::cout << "1: Push" << std::endl;
    std::cout << "2: Pop" << std::endl;
    std::cout << "3: Exit" << std::endl;

    int cmd;
    std::cout << "Command: ";
    std::cin >> cmd;

    switch (cmd) {
    case 1: {
      const auto elem = random_vec2();
      if (!s.Push(elem)) {
        std::cerr << "Failed to push!" << std::endl;
      }
      break;
    }
    case 2: {
      Vec2 v;
      if (!s.Pop(v)) {
        std::cerr << "Failed to pop!" << std::endl;
      } else {
        std::cout << "Pop: " << v << std::endl;
      }
      break;
    }
    case 3: {
      loop = false;
      break;
    }
    }
  }
}

void test() {
  Stack<Vec2> s(5);

  assert(s.IsEmpty());
  assert(!s.IsFull());

  assert(s.Push({1, 2}));
  assert(s.Push(3, 4));
  assert(s.Push(5, 6));
  assert(s.Push({7, 8}));

  assert(!s.IsEmpty());
  assert(!s.IsFull());

  assert(s.Push(9, 10));
  assert(!s.Push(11, 12));

  assert(!s.IsEmpty());
  assert(s.IsFull());

  Vec2 v;
  assert(s.Pop(v));
  assert(v == Vec2(9, 10));
  assert(s.Pop(v));
  assert(v == Vec2(7, 8));
  assert(s.Pop(v));
  assert(v == Vec2(5, 6));
  assert(s.Pop(v));
  assert(v == Vec2(3, 4));
  assert(s.Pop(v));
  assert(v == Vec2(1, 2));

  assert(!s.Pop(v));

  assert(s.IsEmpty());
  assert(!s.IsFull());
}
