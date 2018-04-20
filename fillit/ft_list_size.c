/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:19:41 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/21 20:26:00 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_create_elem(void *data);

int	ft_list_size(t_list *begin_list)
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