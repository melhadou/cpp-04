#include "Dog.hpp"

Dog::Dog() : Animal() {
  std::cout << "Dog default constructor" << std::endl;
  this->type = "Dog";
}

Dog::Dog(std::string type) : Animal(type) {
  std::cout << "Dog Parametrized constructor" << std::endl;
}

Dog::Dog(const Dog &rhs) : Animal() {
  std::cout << "Dog copy constructor" << std::endl;
  *this = rhs;
}

Dog &Dog::operator=(const Dog &rhs) {
  std::cout << "Dog copy assignment constructor" << std::endl;
  if (this != &rhs)
    this->type = rhs.type;
  return *this;
}

void Dog::makeSound() const { std::cout << "Howl, Howl..." << std::endl; }

std::string Dog::getType() const { return this->type; }

Dog::~Dog() { std::cout << "Dog destructor" << std::endl; }
