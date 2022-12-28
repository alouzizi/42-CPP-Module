NAME = Phonebook

SRC     =  main.cpp\
        Phonebook.cpp\

CXX = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Phonebook.hpp
		$(CXX) $(CFLAGS) $(DFLAGS) -c -o $@ -c $<

$(NAME): $(OBJ) Phonebook.hpp
		$(CXX) $(CFLAGS) $(DFLAGS) $(OBJ) -o $@ 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:     fclean all