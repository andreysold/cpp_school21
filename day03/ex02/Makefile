CC = c++

NAME = FragTrap

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
		ClapTrap.Class.cpp\
		FragTrap.Class.cpp\
		ScavTrap.Class.cpp\

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