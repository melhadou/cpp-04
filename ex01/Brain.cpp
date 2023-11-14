#include "Brain.hpp"

Brain::Brain() { std::cout << "Brain Constructor called" << std::endl; }

Brain::Brain(const Brain &rhs) {
  std::cout << "Brain Copy Constructor called" << std::endl;
  *this = rhs;
}

Brain &Brain::operator=(const Brain &rhs) {
  std::cout << "Brain Assignment Operator called" << std::endl;
  if (this == &rhs)
    for (int i = 0; i < 100; i++)
      this->ideas[i] = rhs.ideas[i];
  return *this;
}

Brain::~Brain() { std::cout << "Brain Destructor called" << std::endl; }
