/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:15:59 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/21 20:28:37 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *cursor;

	cursor = *begin_list;
	if (cursor)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		return (cursor);
	}
	return (NULL);
}
