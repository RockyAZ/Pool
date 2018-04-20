/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 06:51:10 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/17 14:04:02 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int lenght)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		while (tab[i][j] != 0)
		{
			j++;
		}
		while (tab[i][j + 1] != 0)
		{
			if (tab[i][j + 1] != 0)
				tab[i][j] = tab[i][j + 1];
			j++;
		}
		j++;
	}
	i++;
}
