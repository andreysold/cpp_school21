CC = c++

HEADER = Span.hpp

NAME = Span

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp\
		Span.cpp\

OBJS = $(patsubst %.cpp, %.o, $(SRC))

all:
	$(MAKE) $(NAME)

$(NAME): $(OBJS) $(HEADER)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
