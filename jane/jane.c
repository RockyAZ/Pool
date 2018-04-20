/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jane.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 16:23:59 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/27 17:19:18 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void final(char *str)
{ 

	int i;

	i = 1;
	printf("%c", str[0]);
	while (str[i] != '\0')
	{
		while (str[i] != str[0])
		{
			printf("%c", str[i]);
			i++;
		}
		i++;
	}
}

int main()
{
	char str[100] = "heeee   hhh oiho iho iho ihellllllloo";
	char c;
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		c = str[i];
		while (str[j] != '\0')
		{
			while (c == str[j])
			{
				str[j] = str[0];
				j++;
			}
			j++;
		}
		i++;
	}
	final(str);
	return (0);
}
