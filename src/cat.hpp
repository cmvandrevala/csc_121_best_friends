#pragma once

#include <iostream>

class Cat
{
private:
  std::string name;

public:
  Cat(std::string name);
  std::string get_name();
  void play();
};
