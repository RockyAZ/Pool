/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 17:30:24 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/10 17:56:49 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 0)
	{
		return(0);
	}
    while((i * i != nb) && (i <= nb / 2))
	{
		i++;
	}
	if((nb % i) == 0)
	{
		return (i);
	}
	else
	{
		return(0);
	}
}

int main()
{
    //int q;
    //q = 12 % 4;
    printf("%d\n", ft_sqrt(12));
    //printf("%d\n", q);
    return (0);
}