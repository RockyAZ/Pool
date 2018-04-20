/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 17:22:11 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/09 17:22:13 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    int res;
    int md;
    
    res = a / b;
    md = a % b;
    *div = res;
    *mod = md;
}

int main()
{
    int div;
    int mod;
    
    int *ptdiv;
    int *ptmod;
    
    ptdiv = &div;
    ptmod = &mod;
    ft_div_mod(8, 3, ptdiv, ptmod);
    printf("div is: %d, mod is: %d\n", div, mod);
    return (0);
}
