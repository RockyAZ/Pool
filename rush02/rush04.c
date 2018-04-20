/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:15:09 by aabdulla          #+#    #+#             */
/*   Updated: 2018/02/11 19:51:32 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	ft_putchar(char c);

void		rush(int x, int y)
{
	int	w;
	int h;

	h = -1;
	while (++h < y && x > 0)
	{
		w = -1;
		while (++w < x)
		{
			if (w == 0 && h == 0)
				ft_putchar('A');
			else if (w == 0 && h == y - 1)
				ft_putchar('C');
			else if (w == x - 1 && h == 0)
				ft_putchar('C');
			else if (w == x - 1 && h == y - 1)
				ft_putchar('A');
			else if (w == 0 || w == x - 1 || h == 0 | h == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
