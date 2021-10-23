/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:46:55 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/23 18:32:18 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strdup(const char *str)
{
    int len;
    int i;
    char *new;
    
    i = 0;
    len = ft_strlen(str);
    new = (char*)malloc(sizeof(char) * (len + 1));
    if (new == NULL)
        return (NULL);
    while (str[i])
    {
        new[i] = str[i];
        i++;
    }
    new[i] = '\0';
    return (new);
}