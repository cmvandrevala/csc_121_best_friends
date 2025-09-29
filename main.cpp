#include <iostream>

#include "src/cat.hpp"
#include "src/dog.hpp"
#include "src/pets.hpp"

int main()
{
  Cat cat = Cat("Princess Fluffywhiskers");
  Dog dog = Dog("Sparky", &cat);

  std::cout << ">>> Calling #play() on a cat" << std::endl;
  cat.play();
  std::cout << std::endl;

  std::cout << ">>> Calling #play() on a dog" << std::endl;
  dog.play();
  std::cout << std::endl;

  std::cout << ">>> Calling #take_to_the_park on a cat" << std::endl;
  take_to_the_park(cat);
  std::cout << std::endl;

  std::cout << ">>> Calling #take_to_the_park on a dog" << std::endl;
  take_to_the_park(dog);
  std::cout << std::endl;

  std::cout << ">>> Calling #play_together" << std::endl;
  play_together(dog, cat);
  std::cout << std::endl;

  return 0;
}
