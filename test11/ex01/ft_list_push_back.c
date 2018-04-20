/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:58:14 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/21 15:44:47 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *cursor;

	cursor = *begin_list;
	if (!cursor)
		list = ft_create_elem(data);
	else
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		current->next = ft_create_elem(data);
	}
}
