/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:08:07 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/22 19:08:14 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include "ft_list.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[8];

	if (argc > 2)
		ft_putstr("Too many arguments.");
	else if (argc < 2)
		ft_putstr("File name missing.");
	else
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, buf, 7)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
	return (0);
}
