CC = c++

NAME = MutantStack

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp\

HEADER = MutantStack.hpp

OBJS = $(patsubst %.cpp, %.o, $(SRC))

all:
	$(MAKE) $(NAME)

$(NAME): $(OBJS) $(HEADER)
		 $(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp	$(SRC) $(MAKE)
		@$(CC) $(FLAGS) -c $< -o $@

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
