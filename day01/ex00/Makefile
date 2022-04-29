CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

SRCS += main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomCump.cpp\

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all:
		@$(MAKE) $(NAME)

$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
		@echo "ex00 is ready to use ✅ "

%.o: %.cpp	$(SRC) $(MAKE)
		@$(CC) $(FLAGS) -c $< -o $@

clean:
			@$(RM)	$(OBJS)
			@echo ".o Deleted 🗿"

fclean: 	clean
			@$(RM)	 $(NAME)
			@echo "Deleted 😬"

re:			fclean all

.PHONY: all clean fclean re
