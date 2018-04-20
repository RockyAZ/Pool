/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:30:22 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/22 17:30:36 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

#include <stdlib.h>

typedef structs_list
{
	struct s_list*next;
	void *data;
}t_list;


t_list*ft_create_elem(void *data)
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



intft_list_size(t_list *begin_list)
{
	inti;
	t_list*cursor;

	i = 0;
	cursor = begin_list;
	while (cursor)
	{
		cursor = cursor->next;
		i++;
	}
	return (i);
}


int main()
{
    t_list *head = ft_create_elem("own");
    
    int size = ft_list_size(head);
    
    printf("%i", size);

    return 0;
}
