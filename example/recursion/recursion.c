/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 11:17:04 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/10 12:20:24 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int fn(int i)
{
	if(i <= 5)
	{
		i += 1;
		write(1, "D", 1);
		fn(i);
		write(1, "F", 1);
		return (0);
	}
	else
	{
		return(0);
	}
}

int main()
{
	fn(0);
	return(0);
}
