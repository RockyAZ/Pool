/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 14:27:57 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/11 18:20:45 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define TETRA_SIZE 21
# include "libft.h"
# include <unistd.h>
# include <fcntl.h>
# include "fillit.h"

#include <stdio.h>

typedef struct	s_pos
{
	int				x[4];
	int				y[4];
	struct s_pos	*next;
}				t_pos;
#endif
/*
  t_pos*ft_coord(t_list **src, t_pos **res)
{
inti;
intj;
char*pos;
t_pos*list_coord;

i = 0;
j = 0;
pos = (*src)->content;
list_coord = *res;
while (i <= TETRA_SIZE)
{
if (*pos == '#')
{
list_coord->x[j] = (i % 5) - 1;
list_coord->y[j] = i / 5;
j++;
}
i++;
pos++;
}
return (list_coord);
}
*/
