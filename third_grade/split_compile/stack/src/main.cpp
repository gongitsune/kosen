#include "stack.hpp"
#include "vec2.hpp"
#include <cassert>

int main(void) {
  Stack s(5);

  assert(s.IsEmpty());
  assert(!s.IsFull());

  assert(s.Push(1, 2));
  assert(s.Push(3, 4));
  assert(s.Push(5, 6));
  assert(s.Push(7, 8));

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

  return 0;
}
