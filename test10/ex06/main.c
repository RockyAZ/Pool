/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 12:01:04 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/20 17:25:08 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_oper(int a, int b, char *sign);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*sign;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[argc - 1]);
	sign = argv[2];
	if (sign[1] != '\0')
		return (0);
	if (b == 0 && sign[0] == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (b == 0 && sign[0] == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_putnbr(ft_oper(a, b, sign));
	return (0);
}
