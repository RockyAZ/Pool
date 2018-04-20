/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:35:47 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/21 12:44:20 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_create_elem(void *data)
{
	t_list *head;

	head = malloc(sizeof(t_list));
	if (head)
	{
		head->data = data;
		head->next = NULL;
	}
	return (head);
}
