CC = clang++

FLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = awesome

SRCS = PhoneBook.cpp Contact.cpp main.cpp\

OBJS = $(patsubst %.cpp, %.o ,$(SRCS))

all:
		@$(MAKE) $(NAME)

$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
		@echo "ex01 is ready to use ✅ "

%.o: %.cpp	$(SRC) $(MAKE)
		@$(CC) $(FLAGS) -c $< -o $@

clean:
			@$(RM)	$(OBJS)
			@echo ".o Deleted 🗿"

fclean: 	clean
			@$(RM)	 $(NAME)
			@echo "ex01 Deleted 😬"

re:			fclean all

.PHONY: all clean fclean re