/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 13:24:05 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/12 16:37:28 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


void    ft_putnbr(int n)
{
    /*if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb = -nb);
    }
    else if (nb < 10)
    {
        ft_putchar(nb + '0');
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
    }*/
    char c = ' ';
    int nb = c - '0';
    printf("%d", nb);
    
}
    
    
    int                main(void)
    {
        int i = 22;
        ft_putnbr(i);
        return (0);
    }


