CC = c++

NAME = Temp

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\

HEADER = easyfind.hpp

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all:
	$(MAKE) $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
		@$(CC) $(FLAGS) -c $< -o $@
clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re