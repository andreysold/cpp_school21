CC = clang++

NAME = ClapTrap

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
		ClapTrap.Class.cpp\

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all:
	$(MAKE) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re