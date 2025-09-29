#pragma once

#include "cat.hpp"

class Dog
{
private:
  std::string name;

public:
  Dog(std::string name, Cat *cat);
  Cat *best_friend;
  void play();
};
