#include <iostream>

#include "pets.hpp"

void take_to_the_park(Dog dog)
{
  std::cout << "I am at the park! This is the best day of my life!" << std::endl;
  dog.play();
}

void take_to_the_park(Cat cat)
{
  std::cout << "I am at the park! Who the $&*! put a leash on me????" << std::endl;
  cat.play();
}

void play_together(Dog dog, Cat cat)
{
  std::cout << "And so... the two best friends played together till the sun set over the horizon." << std::endl;
  dog.play();
  cat.play();
}
