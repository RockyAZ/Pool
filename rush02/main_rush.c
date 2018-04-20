/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpetruno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 12:50:31 by mpetruno          #+#    #+#             */
/*   Updated: 2018/02/24 13:19:32 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int i, int j);
int		ft_atoi(char *str);
int		main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[2]);
	rush(a, b);
	return (0);
}
