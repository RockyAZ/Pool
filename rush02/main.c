/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 11:17:58 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/24 14:15:28 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_dop(char *str1, char *str2, char *str3)
{
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	int i;
	int j;

	i = -1;
	j = 2;
	while (++i != argc)
	{
		write(1, "[", 1);
		if (i == 0)
		{
			while (argv[i++][j] != '\0')
				ft_putchar(argv[--i][j++]);
			write(1, "]", 1);
			write(1, "[", 1);
		}
			ft_putstr((argv[i]));
			write(1, "]", 1);
	}
	ft_putchar('\n');
	return (0);
}
