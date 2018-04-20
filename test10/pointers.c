/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:22:10 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/19 18:05:00 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef void (*funptr)(char);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
//	void (*f)(char);

	funptr f;

	f = &ft_putchar;
	f('z');

	return (0);
}
