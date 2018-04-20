/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 00:47:48 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/17 13:58:11 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else if (base % 2 == 0)
		return (ft_collatz_conjecture(base / 2) + 1);
	else if (base % 2 != 0)
		return (ft_collatz_conjecture((base * 3) - 1) + 1);
	else
		return (0);
}
