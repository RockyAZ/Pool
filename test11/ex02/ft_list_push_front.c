/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:46:01 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/21 19:49:43 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_node;

	if (*begin_list)
	{
		new_node = ft_create_elem(data);
		new_node->next = *begin_list;
		*begin_list = new_node;
	}
	else
		*begin_list = ft_create_elem(data);
}
