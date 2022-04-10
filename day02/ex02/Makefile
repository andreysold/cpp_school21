CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Fixed

SRCS = main.cpp\
		Fixed.cpp\

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all:
	@$(MAKE) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
		@rm -f $(OBJS)
		@echo ".o Deleted 🗿"

fclean: 	clean
			@rm -f	 $(NAME)
			@rm -f	 $(FILE)
			@echo "Deleted 😬"

re:			fclean all

.PHONY: all clean fclean re
