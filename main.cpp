#include "cat.hpp"
#include "dog.hpp"
#include "pets.hpp"

int main()
{
  Cat cat = Cat("Princess Fluffywhiskers");
  Dog dog_one = Dog("Sparky", cat);
  Dog dog_two = Dog("Lucy", cat);

  dog_one.play();

  dog_two.play();

  return 0;
}
