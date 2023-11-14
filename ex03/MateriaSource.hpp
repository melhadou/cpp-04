#pragma once
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
  AMateria *materias[4];

public:
  MateriaSource();
  MateriaSource(const MateriaSource &rhs);
  MateriaSource &operator=(const MateriaSource &rhs);
  ~MateriaSource();

  void learnMateria(AMateria *m);
  AMateria *createMateria(std::string const &type);
};
