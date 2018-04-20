/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpetruno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 12:50:31 by mpetruno          #+#    #+#             */
/*   Updated: 2018/02/11 20:32:35 by mpetruno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
    char str[] = "Hee";
    char str1[] = {};
    
    ft_strcpy(str1,str);
    printf("%s\n", str1);
    return 0;
}
