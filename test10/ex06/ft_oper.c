/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 14:07:50 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/20 17:23:33 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		ft_oper(int a, int b, char *sign)
{
	if (sign[1] != '\0')
		return (0);
	else if (sign[0] == '+')
		return (a + b);
	else if (sign[0] == '-')
		return (a - b);
	else if (sign[0] == '*')
		return (a * b);
	else if (sign[0] == '/')
		return (a / b);
	else if (sign[0] == '%')
		return (a % b);
	else
		return (0);
}
