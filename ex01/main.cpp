#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

  const Animal *i = new Cat();
  const Animal *j = new Dog();

  i->makeSound();
  j->makeSound();

  delete i;
  delete j;

  const Animal *animals[6] = {new Dog(), new Dog(), new Dog(),
                              new Cat(), new Cat(), new Cat()};

  for (int i = 0; i < 6; i++)
    animals[i]->makeSound();

  // Destructor called 6 times
  for (int i = 0; i < 6; i++)
    delete animals[i];

  return 0;
}
