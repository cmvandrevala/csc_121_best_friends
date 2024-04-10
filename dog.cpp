#include "dog.hpp"
#include "cat.hpp"

Dog::Dog(string name, Cat cat)
{
  this->name = name;
  this->best_friend = cat;
}

void Dog::play()
{
  cout << "Woof woof... frolick in the fields" << endl;
  cout << "Join me " << this->best_friend->get_name() << "!" << endl;
  this->best_friend->play();
}
