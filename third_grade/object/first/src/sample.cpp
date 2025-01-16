#include "sample.hpp"
#include <iostream>

Sample::Sample(std::string name) : name{name}, data{1000} {
  std::cout << "Constructor: " << name << std::endl;
}
Sample::Sample(int data) : name{"default"}, data{data} {
  std::cout << "Constructor: " << name << std::endl;
}
Sample::~Sample() { std::cout << "Destructor: " << name << std::endl; }

int Sample::get_data() { return data; }

void Sample::mul() {
  data *= 2;
  return;
}

void Sample::mul(int n) {
  data *= n;
  return;
}
