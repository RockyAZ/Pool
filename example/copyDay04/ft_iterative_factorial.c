/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 12:22:35 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/10 13:09:05 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int res;

	i = 1;
	res = 1;
	if (nb <= 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	printf ("%d\n", res);
    return(res);
}
int main()
{
    ft_iterative_factorial(4);
    return(0);
}
