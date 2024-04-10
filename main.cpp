#include "cat.hpp"
#include "dog.hpp"
#include "pets.hpp"

int main()
{
  Cat cat = Cat("Princess Fluffywhiskers");
  Dog dog = Dog("Sparky");

  cat.play();
  dog.play();

  take_to_the_park(dog);
  take_to_the_park(cat);

  return 0;
}
