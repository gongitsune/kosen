#include "animal.hpp"
#include "dog.hpp"
#include "sample.hpp"
#include <iostream>
#include <vector>

void dog();

int main(void) {
  Sample a{"a"}, b{2000};

  a.mul(5);

  std::cout << "a.data: " << a.get_data() << std::endl;
  std::cout << "b.data: " << b.get_data() << std::endl;

  dog();

  return 0;
}

void dog() {
  Dog dog{"John"};

  std::vector<Animal *> animals;
  animals.push_back(&dog);

  for (auto animal : animals) {
    animal->bark();
  }

  return;
}
