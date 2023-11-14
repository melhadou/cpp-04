NAME = Amateria 
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CXXFILES =  Cure.cpp Ice.cpp AMateria.cpp MateriaSource.cpp Character.cpp main.cpp  
CXXOBJ = $(CXXFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(CXXOBJ)
	$(CXX) $(CXXFLAGS) $(CXXOBJ) -o $(NAME)

clean:
	rm -f $(CXXOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
