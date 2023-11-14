#pragma once
#include "Animal.hpp"

class Cat : public Animal {
private:
  Brain *brain;

public:
  Cat();
  Cat(std::string type, Brain *brain);
  Cat(const Cat &rhs);
  Cat &operator=(const Cat &rhs);
  ~Cat();

  void makeSound(void) const;
  std::string getType() const;
};
