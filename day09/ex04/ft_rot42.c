/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 21:47:28 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/15 22:33:12 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;
	int		j;
	int		k;
	int		p;
	char	*fin;
	char	demo[] = "abcdefghijklmnopqrstuvwxyz";
	
	i = 0;
	j = 0;
	k = 0;
	p = 0;
	while (str[i] != '\0')
	{
		while (str[i] != demo[k])
			k++;
		while (j != 42)
		{
			if (k == 25)
				k = 0;
			j++;
		}
		fin[p] = demo[k];
		p++;
		i++;
		j = 0;
		k = 0;
	}
	return (fin);
}
