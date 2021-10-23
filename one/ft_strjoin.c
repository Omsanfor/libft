/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:50:55 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/21 19:01:42 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *new; 
    
    i = 0;
    j = 0;
    if (!s1 && !s2)
        return (NULL);
    new = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (new == NULL)
        return (NULL);
    while (s1[i]) 
    {
        new[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        new[i + j] = s2[j];
        j++; 
    }
    new[i + j] = '\0';
    return (new);
}