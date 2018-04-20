/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 18:08:42 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/10 18:44:46 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;
    
    i = 2;
    if (nb <= 1)
    {
        return (0);
    }
    while (i <= nb)
    {
        if ((nb % i == 0) && (i == nb))
        {
            return (1);
        }
        else if ((nb % i == 0) && (i <= nb))
        {
            return (0);
        }
        i++;
    }
    return (0);
}
  /*  if (nb == i)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
*/
int main()
{
    printf("%d\n", ft_is_prime(1));
    return (0);
}
