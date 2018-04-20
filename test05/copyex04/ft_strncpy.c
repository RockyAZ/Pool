/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 21:05:19 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/13 17:07:13 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((*src != '\0') && i < n)
	{
		dest[i] = *src;
        //dest++;
        src++;
        i++;
	}
	dest[i] = '\0';
	return (dest);
}
