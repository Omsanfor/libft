/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:36:27 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/23 16:15:03 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *a, const void *b, size_t len)
{
	size_t i;

	i = 0;
	while (i != len)
	{
		*((unsigned char*)a + i) = *((unsigned char*)b + i);
		i++;
	}
	return (a);
}
