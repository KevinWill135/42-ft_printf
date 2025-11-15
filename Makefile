SRC = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putnbr.c ft_putstr.c ft_strlen.c ft_count_nb_len.c ft_putptr_base.c

OBJS = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

NAME = libftprintf.a
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $(OBJS)
	@ranlib $(NAME)
	@echo "Done, now u can use me LoL"

%.o: %.c
	@echo "Compiling..."
	@$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all