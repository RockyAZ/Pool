/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 22:51:14 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/15 23:04:00 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if ((j < i && j > k) || (j > i && j < k))
		return j;
	else if ((i < j && i > k) || (i > j && i < k))
		return i;
	else
		return k;
}
