#include "Animal.hpp"

Animal::Animal() : type("Animal") {
  std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
  std::cout << "Animal Parametrized constructor" << std::endl;
}

Animal::Animal(const Animal &rhs) {
  std::cout << "Animal copy constructor" << std::endl;
  *this = rhs;
}

Animal &Animal::operator=(const Animal &rhs) {
  std::cout << "Animal copy assignment constructor" << std::endl;
  if (this != &rhs)
    this->type = rhs.type;
  return *this;
}

void Animal::makeSound() const {
  std::cout << "Animal Dont Have A sound!!" << std::endl;
}

std::string Animal::getType() const { return this->type; }

Animal::~Animal() { std::cout << "Animal destructor" << std::endl; }
