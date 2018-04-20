/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 11:02:27 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/22 14:26:52 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
//#include "j12.h"
void ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}
int main()
{
	int fd;

	fd = open("kurva", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	ft_putnbr(fd);
	ft_putchar(fd, 'Z');
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}
