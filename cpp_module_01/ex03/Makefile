NAME = violence

SRC     =  main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp 

INC		= Weapon.hpp \
			HumanA.hpp \
			HumanB.hpp

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

re:     fclean all