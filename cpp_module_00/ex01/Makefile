NAME = Phonebook

SRC     =  main.cpp\
        Phonebook.cpp\

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Phonebook.hpp
		@$(CC) $(FLAGS) -c -o $@ -c $<

$(NAME): $(OBJ) Phonebook.hpp
		@$(CC) $(FLAGS) $(OBJ) -o $@ 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:     fclean all