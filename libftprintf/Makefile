NAME = libftprintf.a
CC = gcc
CFLAGS 	= 	-Wall -Wextra -Werror
SOURCE = ft_isascii.c \
		ft_printf.c \

OBJECTS = $(SOURCE:.c=.o)


all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)


clean:
	@rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.DEFAULT_GOAL := all
.PHONY: all bonus clean fclean re