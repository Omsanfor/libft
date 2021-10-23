/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:26:50 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/09 21:27:07 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while ((i < len) && (*(src + i) != '\0'))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	return (i);	
}
