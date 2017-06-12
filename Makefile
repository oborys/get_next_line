NAME = test_gnl
PATH_SRC = ./
PATH_OBJ = ./

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = 	$(PATH_SRC)get_next_line.c

OBJ = $(patsubst %.c,%.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/ fclean
	make -C libft/
	$(CC) $(CFLAGS) -I libft/ -c get_next_line.c
	$(CC) $(CFLAGS) -I libft/ -c main.c
	$(CC) -o $(NAME) get_next_line.o main.o -L libft/ -lft

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
