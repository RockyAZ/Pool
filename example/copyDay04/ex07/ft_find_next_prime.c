/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 19:00:43 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/11 11:41:58 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int    ft_find_next_prime(int nb)
{
    int i;
    
    i = 2;
    if (nb <= 1)
    {
        return (0);
    }
    while (i <= nb)
    {
        if (i == nb)
        {
            return (nb);
        }
        else if ((nb % i == 0) && (i < nb))
        {
            nb++;
            i = 2;
        }
        i++;
    }
    return (0);
}

int main(){
    int t1, t2;
    t1 = clock();
    printf("%d\n", ft_find_next_prime(2147483647));
    t2 = clock();
    printf("time = %d ms", (t2 - t1)/1000);
    return 0;
}
