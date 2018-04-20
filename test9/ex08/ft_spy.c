/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:45:50 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/17 13:59:52 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return 0;
}

int	main(int argc, char **argv)
{
	int i;
	char p[] = "president";
	char a[] = "attack";
	char b[] = "Bauer";

	i = 1;
	while (i < argc)
	{
		if ((argv[i] == p) || (argv[i] == a) || (argv[i] == b))
		{
			ft_putstr("Alert");
			ft_putchar('\n');
		}
		i++;
	}
	return (0);
}
