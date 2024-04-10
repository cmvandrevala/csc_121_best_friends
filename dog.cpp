#include "dog.hpp"
#include "cat.hpp"

Dog::Dog(string name)
{
  this->name = name;
}

void Dog::play()
{
  cout << "Woof woof... frolick in the fields" << endl;
}
