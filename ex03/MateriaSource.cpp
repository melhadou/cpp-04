#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
  int i = 0;
  while (i < 4) {
    this->materias[i] = NULL;
    i++;
  }
}

MateriaSource::MateriaSource(const MateriaSource &rhs) { *this = rhs; }

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
  if (this != &rhs) {
    int i = 0;
    while (i < 4) {
      if (this->materias[i])
        delete this->materias[i];
      if (rhs.materias[i])
        this->materias[i] = rhs.materias[i]->clone();
      i++;
    }
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
  int i = 0;
  while (i < 4) {
    if (!this->materias[i]) {
      this->materias[i] = materia;
      break;
    }
    i++;
  }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
  int i = 0;
  while (i < 4) {
    if (this->materias[i] && this->materias[i]->getType().compare(type))
      return this->materias[i]->clone();
    i++;
  }
  return NULL;
}

MateriaSource::~MateriaSource() {
  int i = 0;
  while (i < 4) {
    if (this->materias[i])
      delete this->materias[i];
    i++;
  }
}
