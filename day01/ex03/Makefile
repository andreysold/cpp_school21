CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = violence

SRCS =	main.cpp\
		HumanB.cpp\
		HumanA.cpp\
		Weapon.cpp\

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all:
	$(MAKE) $(NAME)

$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
		@echo "ex03 is ready to use ✅ "
clean:
			@rm -f	$(OBJS)
			@echo ".o Deleted 🗿"

fclean: 	clean
			@$(RM)	 $(NAME)
			@echo "Deleted 😬"

re:			fclean all

.PHONY: all clean fclean re