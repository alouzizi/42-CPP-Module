NAME = main

SRC	 =	main.cpp \
		Dog.cpp \
		Cat.cpp \
		Animal.cpp \
		Brain.cpp

INC = Animal.hpp \
		Dog.hpp \
		Cat.hpp \
		

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(INC)
		@$(CC) $(FLAGS) -c -o $@ -c $<

$(NAME): $(OBJ) $(INC)
		@$(CC) $(FLAGS) $(OBJ) -o $@ 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all