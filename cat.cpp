#include <iostream>
#include "cat.hpp"

using namespace std;

Cat::Cat(string name)
{
  this->cat_name = name;
}

void Cat::play()
{
  cout << "Meow meow... murder the chipmunks..." << endl;
}

string Cat::get_name()
{
  return this->cat_name;
}
