/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:25:55 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/21 18:50:15 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    int j;
    char *new;

    i = 0;
    j = 0;
    if (!s)
        return (NULL);
    while (s[start + j])
        j++;
    if(len > j)
        len = j;        
    new = (char*)malloc(sizeof(char) * (len + 1));
    if (new == NULL)
        return (NULL);
    while (s[start] && i < len) 
    {
       new[i] = s[start + i];
       i++;
    }
    new[i] = '\0';
    return (new); 
}