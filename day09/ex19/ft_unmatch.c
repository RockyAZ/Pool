/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 12:50:41 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/16 13:40:02 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int lenght)
{
	int i;
	int j;
	int sign;
	char c[] = "0123456789";

	i = 0;
	j = 0;
	sign = -1;
	while ( i < lenght)
	{
			while (tab[i] != c[j] && tab[i] != '\0')
			{
			if (tab[i++] == '\0')
				i = 0;
			i++;
			}
		sign *= -1;
		j++;
	}
	return (tab[i]);
}
