#pragma once
#include "AMateria.hpp"

class Character : public ICharacter {
private:
  std::string name;
  AMateria *slots[4];

public:
  Character();
  Character(std::string const &name);
  Character(const Character &rhs);
  Character &operator=(const Character &rhs);
  ~Character();

  std::string const &getName() const;
  void equip(AMateria *m);
  void unequip(int idx);
  void use(int idx, ICharacter &target);
  AMateria *getSlot(int idx);
};
