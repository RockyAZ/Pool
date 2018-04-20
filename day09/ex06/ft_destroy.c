/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 23:46:06 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/16 00:08:54 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (factory[i] != '\0')
	{
		while (factory[i][j] != '\0')
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
