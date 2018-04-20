/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pos_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 15:42:39 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/11 16:08:57 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_pos_back(t_pos **begin_list, void *x, void *y, int size)
{
	t_list *cursor;

	cursor = *begin_list;
	if (!cursor)
		(*begin_list) = ft_lstnew(x, y, size);
	else
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = ft_lstnew(data, size);
	}
}
