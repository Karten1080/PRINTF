# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asmati <asmati@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/17 17:12:01 by asmati            #+#    #+#              #
#    Updated: 2025/05/22 00:47:33 by asmati           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I

SRC =	ft_printf.c \
		ft_print_ptr.c \
		ft_printf_unsigned.c \
		utilis.c \
		ft_printf_hex.c

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INC) -I . -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	$(CC) $(CFLAGS) -o test_printf main.c $(NAME) $(LIBFT)

.PHONY: all clean fclean re
