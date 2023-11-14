#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
  std::cout << "WrongCat default constructor" << std::endl;
  this->type = "WrongCat";
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
  std::cout << "Dog Parametrized constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs) : WrongAnimal() {
  std::cout << "WrongCat copy constructor" << std::endl;
  *this = rhs;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
  std::cout << "WrongCat copy assignment constructor" << std::endl;
  if (this != &rhs)
    this->type = rhs.type;
  return *this;
}

void WrongCat::makeSound() const {
  std::cout << "Not a Meo, Not a Meo..." << std::endl;
}

std::string WrongCat::getType() const { return this->type; }

WrongCat::~WrongCat() { std::cout << "WrongCat destructor" << std::endl; }
