# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 21:20:53 by kde-paul          #+#    #+#              #
#    Updated: 2025/10/24 20:10:41 by kde-paul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putnbr.c ft_putstr.c ft_strlen.c ft_putnbr_u.c ft_count_nb_len.c

OBJS = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

NAME = libftprintf.a
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all