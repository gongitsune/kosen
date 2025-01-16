#include "dog.hpp"
#include "animal.hpp"
#include <iostream>
#include <string>

Dog::Dog(std::string name) : Animal{name} {
  std::cout << "Constructor: Dog" << std::endl;
  return;
}

Dog::~Dog() {
  std::cout << "Destructor: Dog" << std::endl;
  return;
}

void Dog::bark() {
  std::cout << name << " :Bowwow" << std::endl;
  return;
}
