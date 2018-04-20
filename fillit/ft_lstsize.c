/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:46:36 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/11 15:48:27 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_lstsize(t_list *begin_list)
{
	int		i;
	t_list	*cursor;

	i = 0;
	cursor = begin_list;
	while (cursor->next)
	{
		cursor = cursor->next;
		i++;
	}
	return (i);
}
