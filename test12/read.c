/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:05:45 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/22 18:58:10 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 3

int main()
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	fd = open("42", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
//read return 0 when it reaches the end of the file
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
//		ft_putnbr(ret);
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}
