#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();

  const WrongAnimal *wrong_meta = new WrongAnimal("WrongAnimal");
  const WrongAnimal *wrong_i = new WrongCat("WrongCat");

  std::cout << std::endl;

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;

  std::cout << std::endl;

  std::cout << wrong_meta->getType() << " " << std::endl;
  std::cout << wrong_i->getType() << " " << std::endl;

  std::cout << std::endl;

  i->makeSound();
  j->makeSound();
  meta->makeSound();

  std::cout << std::endl;

  wrong_i->makeSound();
  wrong_meta->makeSound();

  std::cout << std::endl;

  delete meta;
  delete j;
  delete i;

  std::cout << std::endl;

  delete wrong_meta;
  delete wrong_i;

  return 0;
}
