NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_hexpoint.c ft_nosign_nbr.c \
ft_putchar.c ft_putstr.c ft_putnbr.c \
ft_strlen.c ft_hex_mayus.c ft_hex_minus.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling -> $<"

clean:
	@rm -rf *.o *.out
	@echo "Files deleted"

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY = all clean fclean re