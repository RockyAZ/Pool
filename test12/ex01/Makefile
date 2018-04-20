#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 16:59:32 by azaporoz          #+#    #+#              #
#    Updated: 2018/02/22 19:40:46 by azaporoz         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

FLAG = -Wall -Wextra -Werror
LIB = libft.a
HEADER = ft.h
SOURCE = *.c

all: 
	gcc $(FLAG) -I $(HEADER) -o ft_cat $(SOURCE)

clean:
	rm -f ft_cat

fclean: clean
	rm -f $(LIB)