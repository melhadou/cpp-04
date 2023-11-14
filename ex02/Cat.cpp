#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : AAnimal() {
  std::cout << "Cat default constructor" << std::endl;
  this->type = "Cat";
  this->brain = new Brain();
}

Cat::Cat(std::string type, Brain *brain) : AAnimal(type), brain(brain) {
  std::cout << "Dog Parametrized constructor" << std::endl;
}

Cat::Cat(const Cat &rhs) : AAnimal() {
  std::cout << "Cat copy constructor" << std::endl;
  *this = rhs;
}

Cat &Cat::operator=(const Cat &rhs) {
  std::cout << "Cat copy assignment constructor" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
    this->brain = new Brain(*rhs.brain);
  }
  return *this;
}

void Cat::makeSound() const { std::cout << "Meo, Meo..." << std::endl; }

std::string Cat::getType() const { return this->type; }

Cat::~Cat() {
  std::cout << "Cat destructor" << std::endl;
  delete this->brain;
}
