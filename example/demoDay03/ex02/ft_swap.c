/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 12:54:02 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/09 12:54:09 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int  clone_a;
    clone_a = *a;

    *a = *b;
    *b = clone_a;
}

int main()
{
    int a;
    int b;
    
    a = 11;
    b = 22;
    
    int *pta;
    int *ptb;
    
    pta = &a;
    ptb = &b;
    ft_swap(pta, ptb);
    printf("%d %d\n", a, b);

    return(0);
}
