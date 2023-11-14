#pragma once
#include "Animal.hpp"

class Dog : public Animal {
private:
  Brain *brain;

public:
  Dog();
  Dog(std::string type, Brain *brain);
  Dog(const Dog &rhs);
  Dog &operator=(const Dog &rhs);
  ~Dog();

  void makeSound(void) const;
  std::string getType() const;
};
