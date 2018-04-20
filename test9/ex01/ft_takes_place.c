/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 18:44:33 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/17 13:48:45 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int j;
	char c;
	char b;

	b = 'A';
	c = 'A';
	if (hour == 12)
		b = 'P';
	else if (hour == 23)
	{
		j = 0;
		c = 'P';
	}
	else if (hour == 24)
	{
		hour = 0;
	}
	else if (hour > 12)
		c = 'P';
	j = hour + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %c.M. AND %d.00 %c.M.\n", hour, c, j, b);
}
