/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:23:05 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/21 20:50:34 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

t_list *ft_list_push_params(int ac, char **av)
{
	int i;
	t_list *elem;
	t_list *cursor;

	i = 1;
	if (ac == 0)
		return (0);
	while (i < ac)
	{
		elem = ft_create_elem(av[i])
		elem->next = cursor;
		cursor = elem;
		i++;
	}
	cursor->next = ft_create_elem(av[0]);
	return (cursor);
