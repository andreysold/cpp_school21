CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp\
		Harl.cpp\

NAME = harl

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all:
	$(MAKE) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp	$(SRC) $(MAKE)
		@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo ".o Deleted 🗿"

fclean:	clean
	@rm -f $(NAME)
	@echo "Deleted 😬"

re:			fclean all

.PHONY: all clean fclean re