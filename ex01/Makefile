NAME = on_fire
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CXXFILES = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
CXXOBJ = $(CXXFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(CXXOBJ)
	$(CXX) $(CXXFLAGS) $(CXXOBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(CXXOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
