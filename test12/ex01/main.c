/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 19:41:04 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/22 21:03:09 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include "ft_list.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putchat(char c);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int		fd;
	int		count;
	char	buf[8];

	if (argc != 2)
		ft_putstr("cat: ts: No such file or directory\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("cat: ts: No such file or directory\n");
			return (1);
		}
		while ((count = read(fd, buf, 7)))
		{
			buf[count] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
	return (0);
}
