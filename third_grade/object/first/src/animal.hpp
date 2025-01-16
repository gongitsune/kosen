#pragma once

#include <string>
class Animal {
public:
  Animal(std::string name) : name{name} {}
  virtual ~Animal() = 0;

  virtual void bark() = 0;

protected:
  std::string name;
};
