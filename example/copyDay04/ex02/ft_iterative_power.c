/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 14:40:37 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/10 15:55:07 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if ((nb == 0 && power != 0) || power < 0)
	{
		return (0);
	}
	else if ((power == 0) || ((nb < 0) && (power == 0)))
	{
		return (1);
	}
	else
	{
		while (power > 0)
		{
			res = nb * res;
			power--;
		}
	}
	return (res);
}
 int main()
{
    printf("%d\n", ft_iterative_power(2, 3));
    return(0);
}
