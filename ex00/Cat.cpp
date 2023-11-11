#include "Cat.hpp"

Cat::Cat() : Animal() {
  std::cout << "Cat default constructor" << std::endl;
  this->type = "Cat";
}

Cat::Cat(std::string type) : Animal(type) {
  std::cout << "Dog Parametrized constructor" << std::endl;
}

Cat::Cat(const Cat &rhs) : Animal() {
  std::cout << "Cat copy constructor" << std::endl;
  *this = rhs;
}

Cat &Cat::operator=(const Cat &rhs) {
  std::cout << "Cat copy assignment constructor" << std::endl;
  if (this != &rhs)
    this->type = rhs.type;
  return *this;
}

void Cat::makeSound() const { std::cout << "Meo, Meo..." << std::endl; }

std::string Cat::getType() const { return this->type; }

Cat::~Cat() { std::cout << "Cat destructor" << std::endl; }
