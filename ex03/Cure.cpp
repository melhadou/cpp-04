#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &rhs) : AMateria(rhs) { *this = rhs; }

Cure &Cure::operator=(const Cure &rhs) {
  if (this != &rhs)
    this->type = rhs.type;
  return *this;
}

AMateria *Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure() {}
