CC = c++

NAME = array

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\

HEADER = Array.hpp

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all:
	$(MAKE) $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re