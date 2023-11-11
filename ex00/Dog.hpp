#pragma once
#include "Animal.hpp"

class Dog : public Animal {
public:
  Dog();
  Dog(std::string type);
  Dog(const Dog &rhs);
  Dog &operator=(const Dog &rhs);
  ~Dog();

  void makeSound(void) const;
  std::string getType() const;
};
