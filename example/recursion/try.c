/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 11:42:09 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/10 11:45:49 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int i;
    i = 0;
	while(i <= 5)
	{    
		++i;
		printf("%d\n", i);
	}    
	return (0);
}

