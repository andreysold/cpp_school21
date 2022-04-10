CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

SRCS =	main.cpp\
		Zombie.cpp\
		ZombieHorde.cpp\

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all:
	$(MAKE) $(NAME)

$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
		@echo "ex01 is ready to use ✅ "
clean:
			@rm -f	$(OBJS)
			@echo ".o Deleted 🗿"

fclean: 	clean
			@$(RM)	 $(NAME)
			@echo "Deleted 😬"

re:			fclean all

.PHONY: all clean fclean re