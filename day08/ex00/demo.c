/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 16:50:50 by azaporoz          #+#    #+#             */
/*   Updated: 2018/02/17 16:50:51 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char    *ft_create(char *str, int pos, int fin)
{
    int i;
    char *word;
    
    i = 0;
    word = (char*)malloc(sizeof(*word) * ((fin - pos) + 1));
    while (pos < fin)
    {
        word[i] = str[i];
        pos--;
    }
    return (word);
}



char    **ft_split_whitespaces(char *str)
{
    int i;
    int k;
    int j;
    char **arr;
    
    i = 0;
    j = 0;
    k = 0;
    arr = (char**)malloc(sizeof(**arr) * (i + 1));
    while (str[i] != '\0')
    {
        while (str[i] != ' ' || str[i] != '\n' || str[i] != '\t')
        {
            i++;
        }
        j = i;
        str1 = ft_create(str, j, i);
        i++;
        k++;
    }
    return (arr);
}
       // str = (char**)malloc(sizeof(**str) * (k + 1));


int main()
{
    char o[] = "sas was das";
    ft_split_whitespaces(o);
    return (0);
}





