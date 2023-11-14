#include "Character.hpp"

Character::Character() : name("non") {
  int i = 0;
  while (i < 4) {
    this->slots[i] = NULL;
    i++;
  }
}

Character::Character(std::string const &name) : name(name) {
  int i = 0;
  while (i < 4) {

    this->slots[i] = NULL;
    i++;
  }
}

Character::Character(const Character &rhs) { *this = rhs; }

Character &Character::operator=(const Character &rhs) {
  if (this != &rhs) {
    this->name = rhs.name;
    int i = 0;
    while (i < 4) {
      if (this->slots[i])
        delete this->slots[i];
      if (rhs.slots[i])
        this->slots[i] = rhs.slots[i]->clone();
      i++;
    }
  }
  return *this;
}

Character::~Character() {
  int i = 0;
  while (i < 4) {
    delete this->slots[i];
    i++;
  }
}

std::string const &Character::getName() const { return this->name; }

void Character::equip(AMateria *m) {
  int i = 0;

  while (i < 4) {
    if (!this->slots[i]) {
      this->slots[i] = m;
      break;
    }
    i++;
  }
}

AMateria *Character::getSlot(int idx) {
  if (idx < 4 && this->slots[idx])
    return this->slots[idx];
  return NULL;
}

void Character::unequip(int idx) {
  if (idx < 4 && this->slots[idx]) {
    this->slots[idx] = NULL;
  }
}

void Character::use(int idx, ICharacter &target) {
  if (idx < 4 && this->slots[idx])
    this->slots[idx]->use(target);
}
