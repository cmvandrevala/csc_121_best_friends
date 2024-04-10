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

void play_together(Dog dog, Cat cat)
{
  cout << "The dog invites the cat to play!" << endl;
  dog.play();
  cat.play();
}
