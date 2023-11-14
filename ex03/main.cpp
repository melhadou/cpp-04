#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void) {

  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  ICharacter *me = new Character("me");

  AMateria *tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);

  ICharacter *bob = new Character("bob");

  me->use(0, *bob);
  me->use(1, *bob);

  delete bob;
  delete me;

  // testing unquip
  Character *c = new Character("c");

  tmp = src->createMateria("ice");
  c->equip(tmp);
  tmp = src->createMateria("cure");
  c->equip(tmp);

  AMateria *tmp0;
  tmp0 = c->getSlot(0);
  AMateria *tmp1;
  tmp1 = c->getSlot(1);

  c->unequip(0);
  c->unequip(1);

  delete tmp0;
  delete tmp1;
  delete src;
  delete c;
  return 0;
}
