NAME = harl

SRC     =  main.cpp \
			Harl.cpp	

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Harl.hpp
		@$(CC) $(FLAGS) -c -o $@ -c $<

$(NAME): $(OBJ) Harl.hpp
		@$(CC) $(FLAGS) $(OBJ) -o $@ 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:     fclean all