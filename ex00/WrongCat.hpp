#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
  WrongCat();
  WrongCat(std::string type);
  WrongCat(const WrongCat &rhs);
  WrongCat &operator=(const WrongCat &rhs);
  ~WrongCat();

  void makeSound(void) const;
  std::string getType() const;
};
