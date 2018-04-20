/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 18:41:56 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/09 19:23:50 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main()
{
	int a = 10;
	int b = 3;
	int *pta;
	int *ptb;

	pta = &a;
	ptb = &b;

	ft_ultimate_div_mod(pta, ptb);
	printf("%d %d\n", a, b);
	return(0);
}
