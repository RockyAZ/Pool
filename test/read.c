/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 13:40:34 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/28 14:58:23 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	char *str;
	char buf[1];
	int i;

	str = (char*)malloc(sizeof(char) * 1100);
	i = 0;
	while (read(0, buf, 1))
	{
		str[i] = *buf;
//		str[i + 1] = (char)malloc(sizeof(char));
		i++;
	}
	printf("%s", str);
	free(str);
	return (0);
}
