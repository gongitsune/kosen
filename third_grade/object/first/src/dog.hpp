#pragma once

#include "animal.hpp"
#include <string>

class Dog : public Animal {
public:
  Dog(std::string name);
  ~Dog();

  void bark();
};
