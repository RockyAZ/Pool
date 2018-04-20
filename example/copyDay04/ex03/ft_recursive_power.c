/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 15:56:09 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/10 16:32:35 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power != 0) || power < 0)
	{
		return (0);
	}
	else if ((power == 0) || ((nb < 0) && (power == 0)))
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

int main()
            {
                printf("%d\n", ft_recursive_power(2, 3));
                return (0);
            }
