#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 14:20:06 by azaporoz          #+#    #+#              #
#    Updated: 2018/02/24 14:20:27 by azaporoz         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

FLAG = -Wall -Wextra -Werror
LIB = libft.a
HEADER = includes/ft.h
SOURCE = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

all: 
	gcc $(FLAG) -I $(HEADER) -c $(SOURCE)
	ar rc $(LIB) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(LIB)

clean:
	rm -f *.o

fclean: clean
	rm -f $(LIB)

re: fclean all