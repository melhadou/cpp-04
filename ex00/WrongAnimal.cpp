#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
  std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
  std::cout << "WrongAnimal Parametrized constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs) {
  std::cout << "WrongAnimal copy constructor" << std::endl;
  *this = rhs;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
  std::cout << "WrongAnimal copy assignment constructor" << std::endl;
  if (this != &rhs)
    this->type = rhs.type;
  return *this;
}

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal Dont Have A sound!!" << std::endl;
}

std::string WrongAnimal::getType() const { return this->type; }

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor" << std::endl;
}
