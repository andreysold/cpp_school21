CC = c++

NAME = Cast

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
		CastPtr.cpp

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all:
	$(MAKE) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp	$(SRC) $(MAKE)
		@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re