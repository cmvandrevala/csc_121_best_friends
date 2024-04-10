#include "pets.hpp"

void take_to_the_park(Dog dog)
{
  cout << "I am at the park!" << endl;
  dog.play();
}

void take_to_the_park(Cat cat)
{
  cout << "I am at the park!" << endl;
  cat.play();
}
