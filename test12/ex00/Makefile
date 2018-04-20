#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 16:59:32 by azaporoz          #+#    #+#              #
#    Updated: 2018/02/22 15:31:56 by azaporoz         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

FLAG = -Wall -Wextra -Werror
LIB = libft.a
HEADER = ft.h
SOURCE = *.c

all: 
	gcc $(FLAG) -I $(HEADER) -o ft_display_file $(SOURCE)

clean:
	rm -f ft_display_file

fclean: clean
	rm -f $(LIB)