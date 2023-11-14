#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
  std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type) {
  std::cout << "AAnimal Parametrized constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &rhs) {
  std::cout << "AAnimal copy constructor" << std::endl;
  *this = rhs;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
  std::cout << "AAnimal copy assignment constructor" << std::endl;
  if (this != &rhs)
    this->type = rhs.type;
  return *this;
}

void AAnimal::makeSound() const {
  std::cout << "AAnimal Dont Have A sound!!" << std::endl;
}

std::string AAnimal::getType() const { return this->type; }

AAnimal::~AAnimal() { std::cout << "AAnimal destructor" << std::endl; }
