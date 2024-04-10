#pragma once
#include <iostream>

using namespace std;

class Cat
{
private:
  string cat_name;

public:
  Cat(string name);
  string get_name();
  void play();
};
