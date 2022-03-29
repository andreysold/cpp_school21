CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = sed

FILE = text.replace\

SRCS =	main.cpp\
		ReplaceString.cpp\

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all:
	$(MAKE) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)
	@echo "ex04 is ready to use ✅ "

clean:
			@rm -f	$(OBJS)
			@echo ".o Deleted 🗿"

fclean: 	clean
			@rm -f	 $(NAME)
			@rm -f	 $(FILE)
			@echo "Deleted 😬"

re:			fclean all

.PHONY: all clean fclean re