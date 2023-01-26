NAME = zombie

SRC     = Zombie.cpp \
			main.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Zombie.hpp
		@$(CC) $(FLAGS) -c -o $@ -c $<

$(NAME): $(OBJ) Zombie.hpp
		@$(CC) $(FLAGS) $(OBJ) -o $@ 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:     fclean all