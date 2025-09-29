#include "dog.hpp"
#include "cat.hpp"

Dog::Dog(std::string name, Cat *cat)
{
  this->name = name;
  this->best_friend = cat;
}

void Dog::play()
{
  std::cout << "Woof woof... frolick in the fields" << std::endl;
  std::cout << "Join me " << this->best_friend->get_name() << "!" << std::endl;
  this->best_friend->play();
}
