/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:03:52 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/24 16:12:54 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main()
{
	if (ac > 1) 
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar(’\n’);
	}
	return (0); 
}