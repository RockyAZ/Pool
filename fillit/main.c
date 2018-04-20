/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomelian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:35:56 by aomelian          #+#    #+#             */
/*   Updated: 2018/04/05 18:50:54 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_solver(t_list **src);

void	raise_err(void)
{
	ft_putstr("error\n");
	exit(1);
}

void	read_file(int fd, t_list **src)
{
	int ret;
	char buf[TETRA_SIZE];
	t_list *beg;

	beg = *src;
	while ((ret = read(fd, buf, TETRA_SIZE - 1)))
	{
		buf[ret] = '\0';
		ft_list_push_back(&beg, buf, sizeof(buf));
	}
	*src = beg;
}

int		main(int argc, char **argv)
{
	int			fd;
	t_list		*src;

	src = NULL;
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);	
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		raise_err();
	read_file(fd, &src);
//	while(src != NULL)
//	{
//		ft_putendl(src->content);
//		src = src->next;
//	}
	ft_solver(&src);
	close(fd);
	return (0);
}


/*#include "fillit.h"

void	ft_coord(t_list **src)
{
	int		i;
	int		j;
	char	*pos;
	t_pos	*beg;

	i = 0;
//	beg = *res;
	pos = (*src)->content;
	while (i < TETRA_SIZE)
	{
		j = 0;
		while (j < 4 && i < TETRA_SIZE)
		{
			if (*pos == '#')
			{
				beg->x[j] = (i % 5);
				beg->y[j] = i / 5;
				printf("pos_x_beg - %d\n", beg->x[j]);
				printf("pos_y_beg - %d\n\n", beg->y[j]);
				j++;
			}
			i++;
			pos++;
		}
	}
ft_putstr("BAAAAA\n");
//	return (beg);
}

void	ft_solver(t_list **src)
{
	t_list	*cp;
	t_pos	*res;

	cp = *src;
	ft_putendl("cp1:");
	ft_putendl(cp->content);
 	ft_putstr("BBBBB\n");
	ft_coord(&cp);
	ft_putstr("CCCCC\n");
}
*/