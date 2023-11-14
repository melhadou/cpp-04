#include "AMateria.hpp"

AMateria::AMateria() : type("non") {}

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria(const AMateria &rhs) { *this = rhs; }

AMateria &AMateria::operator=(const AMateria &rhs) {
  if (this != &rhs)
    this->type = rhs.type;
  return *this;
}

std::string const &AMateria::getType() const { return this->type; }

void AMateria::use(ICharacter &target) {
  std::cout << "AMateria used : " << target.getName() << " ." << std::endl;
}

AMateria::~AMateria() {}
