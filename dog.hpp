#pragma once
#include "cat.hpp"

#include <optional>

using namespace std;

class Dog
{
private:
  string name;
  optional<Cat> best_friend;

public:
  Dog(string name, Cat cat);
  void play();
};
