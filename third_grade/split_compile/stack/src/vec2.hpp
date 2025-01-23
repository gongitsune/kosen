#pragma once

#include <ostream>
struct Vec2 {
  Vec2(float x, float y) : x(x), y(y) {}
  Vec2() : x(0), y(0) {}

  float x, y;
};

inline std::ostream &operator<<(std::ostream &os, const Vec2 &v) {
  os << "(" << v.x << ", " << v.y << ") ";
  return os;
}

inline bool operator==(const Vec2 &lhs, const Vec2 &rhs) {
  return lhs.x == rhs.x && lhs.y == rhs.y;
}
