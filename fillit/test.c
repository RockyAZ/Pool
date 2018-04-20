/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 15:08:55 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/11 18:48:38 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
/*
typedef struct  s_pos
{
    int         x[4];
    int         y[4];
}               t_pos;

*/

typedef struct  s_pos
{
    int             x[4];
    int             y[4];
    struct s_pos    *next;
}               t_pos;
/*
int main()
{
	int *t;
	int po[2] = {1, 2};

	t = po;
	printf("%d ", *t);
	t++;
	printf("%d ", *t);
//	t++;
//  printf("%d ", *t);
	return (0);
}
*/
int main()
{
	t_pos *i;
	int *p;

//	p = i->x;
//	*p = 6;
	i->x[0] = 9;
	*i->y = 2;
	printf("x1-%d\n", *i->x);
	printf("y1-%d\n", i->y[0]);
	i->x[1] = 3;
	*i->y = 4;
    printf("x2-%d\n", i->x[1]);
	printf("y2-%d\n", i->y[0]);
	return (0);
}
