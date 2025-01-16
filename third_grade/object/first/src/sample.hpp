#pragma once

#include <string>
class Sample {
private:
  std::string name;
  int data;

public:
  Sample(std::string name);
  Sample(int data);
  ~Sample();

  int get_data();
  void mul();
  void mul(int n);
};
