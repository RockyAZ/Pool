/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 15:17:34 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/17 16:51:57 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// character == (' ' || '\n' || '\t')
char	**ft_split_whitespaces(char *str)
{
	int i;
	char *str;

	i = 0;
	str = (char*)malloc(sizeof(*str) * (i + 1));
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			i++;
		}

		str = (char*)malloc(sizeof(*str) * (i + 1));
