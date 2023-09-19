NAME = ex03
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = src/AMateria.cpp src/Character.cpp src/Cure.cpp src/Ice.cpp src/main.cpp src/MateriaSource.cpp
OBJS = $(patsubst src/%.cpp, obj/%.o, $(SRCS))

all: obj $(NAME)

obj:
	@mkdir -p obj

obj/%.o: src/%.cpp | obj
	c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr obj

fclean: clean
	rm -f $(NAME)

re: fclean all
