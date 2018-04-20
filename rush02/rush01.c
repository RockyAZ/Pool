/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpetruno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 12:57:53 by mpetruno          #+#    #+#             */
/*   Updated: 2018/02/11 17:38:15 by mpetruno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	int ft_putchar(char c);

void		rush(int x, int y)
{
	int	w;
	int	h;

	h = -1;
	while (++h < y && x > 0)
	{
		w = -1;
		while (++w < x)
		{
			if (w == 0 && h == 0)
				ft_putchar('/');
			else if (w == 0 && h == y - 1)
				ft_putchar('\\');
			else if (w == x - 1 && h == 0)
				ft_putchar('\\');
			else if (w == x - 1 && h == y - 1)
				ft_putchar('/');
			else if (w == 0 || w == x - 1 || h == 0 || h == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
