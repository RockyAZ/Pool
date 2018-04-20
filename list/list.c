/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 12:46:35 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/28 17:22:06 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "struct.h"
#include <stdio.h>

node *ft_create_elem(void *data)
{
	node *head;
	
	head = malloc(sizeof(node));
		if (head)
		{
			head->next = NULL;
			head->data = data;
		}
	return (head);
}

int main()
{
	node *head = ft_create_elem("kurva\n");

	printf("%s", *head);
	return (0);
}
