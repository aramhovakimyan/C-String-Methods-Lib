NAME = CStringMethodsLib.a
CC = gcc
HEADER = ./includes/stringMethodsLib.h
SRCS = $(shell find . -name "*.c")
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	ar rcs $(NAME) $?

.o: .c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean bonus re all
