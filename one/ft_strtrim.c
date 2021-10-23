/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:46:53 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/21 20:40:25 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;

    i = 0;
    if (!s1)
        return (NULL);    
    if (s1 == set)
        return (NULL);
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    j = ft_strlen(s1);
    while ((i <= j)  && ft_strchr(set, s1[j]))
        j--;
    return (ft(substr(s1, i, j - i + 1)));
}