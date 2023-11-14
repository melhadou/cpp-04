#pragma once
#include "Brain.hpp"
#include <iostream>

class AAnimal {
protected:
  std::string type;

public:
  AAnimal();
  AAnimal(std::string type);
  AAnimal(const AAnimal &rhs);
  AAnimal &operator=(const AAnimal &rhs);
  virtual ~AAnimal();

  virtual void makeSound() const = 0;
  std::string getType() const;
};
