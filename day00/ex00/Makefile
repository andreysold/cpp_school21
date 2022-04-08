CC = clang++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

SRCS += megaphone.cpp\

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all:
		@$(MAKE) $(NAME)

$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
		@echo "ex00 is ready to use ✅ "
clean:
			@$(RM)	$(OBJS)
			@echo ".o Deleted 🗿"

fclean: 	clean
			@$(RM)	 $(NAME)
			@echo "Deleted 😬"

re:			fclean all

.PHONY: all clean fclean re
