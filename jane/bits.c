/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 16:15:46 by azaporoz          #+#    #+#             */
/*   Updated: 2018/03/01 11:30:37 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void swap(char *str)
{
	char a;
	int i = 0;
	while (i < 4)
	{
		a = str[i];
		str[i] = str[i+4];
		str[i+4] = a;
		i++;
	}
	printf("swap: %s\n", str);
}

void bits(unsigned char a)
{
	int i = 0;
	char str[9];
	str[8] = '\0';
	while (i < 8)
		str[i++] = '0';
	i = 7;
	while (a > 0)
	{
		str[i--] = a % 2 + '0';
		a = a / 2;
	}
	printf("%s\n", str);
	swap(str);
}

int main()
{
	unsigned char a = '1';
	bits(a);
	return 0;
}
