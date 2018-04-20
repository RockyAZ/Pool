/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vidos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 15:37:41 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/17 14:25:02 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct	s_point
{
	int x;
	int y;
};

int main(void)
	struct s_point a;
	struct s_point a;

	a.x = 10;
	a.y = 42;
	b = a;
	return (0);
}

typedef struct s_point
{
	int x;
	int y;
}		t_point;

int main(void)
{
	t_point a;
	t_point b;
	t_point *ptr;

	a.x = 10;
	a.y = a;
	b = a;
	ptr = &a;

	(*ptr).x = 10;
//or
//dereferencing your pointer
	ptr->x = 10;	
	return (0);
}
