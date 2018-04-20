/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 13:09:58 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/11 13:09:58 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_lsttrim(char const *s, char c)
{
	const char	*res;

	if (s == NULL)
		return (NULL);
	while (*s != c)
		s++;
	res = s + (ft_strlen(s) - 1);
	while (*res != c)
		res--;
	return (ft_strsub(s, 0, res - s + 1));
}
