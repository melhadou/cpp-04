#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &rhs) : AMateria(rhs) { *this = rhs; }

Ice &Ice::operator=(const Ice &rhs) {
  if (this != &rhs)
    this->type = rhs.type;
  return *this;
}

AMateria *Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}

Ice::~Ice() {}
