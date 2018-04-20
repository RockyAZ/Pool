/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unions.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 14:50:16 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/17 14:57:33 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct s_test
{
	int i;
	char c;
	float f;
	char tab[4];
};

union u_test
{
	int i;
	char c;
	float f;
	char tab[4];
};

int main(void)
{
	printf("%d", (sizeof(struct s_test)));
	return (0);
}
