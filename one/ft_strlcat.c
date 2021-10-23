/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:22:09 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/16 14:36:04 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
    while (*dst != '\0')
    {
        dst++;
        i++;
    }
	while ((i < len) && (*(src + i) != '\0'))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	return (i);	
}