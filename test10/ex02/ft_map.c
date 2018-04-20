/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:02:18 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/19 19:08:32 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *arr;

	i = 0;
	if ((arr = (int*)malloc(sizeof(*arr) * length)));
    {
        while (i < length)
        {
            arr[i] = f(tab[i]);
            i++;
        }
    }
    else
    {
        return (NULL);
    }
	return (arr);
}
