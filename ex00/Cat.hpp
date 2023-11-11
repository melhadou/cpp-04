#pragma once
#include "Animal.hpp"

class Cat : public Animal {
public:
  Cat();
  Cat(std::string type);
  Cat(const Cat &rhs);
  Cat &operator=(const Cat &rhs);
  ~Cat();

  void makeSound(void) const;
  std::string getType() const;
};
