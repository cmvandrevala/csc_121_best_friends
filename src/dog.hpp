#pragma once

#include "cat.hpp"

class Dog
{
private:
  std::string name;
  Cat *best_friend;

public:
  Dog(std::string name, Cat *cat);
  void play();
};
