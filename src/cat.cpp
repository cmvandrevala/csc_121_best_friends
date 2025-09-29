#include <iostream>

#include "cat.hpp"

Cat::Cat(std::string name)
{
  this->name = name;
}

void Cat::play()
{
  std::cout << "Meow meow... hello my delicious little chipmunks..." << std::endl;
}

std::string Cat::get_name()
{
  return this->name;
}
