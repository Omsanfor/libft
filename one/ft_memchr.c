/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:09:34 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/21 19:13:54 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *new;

	i = 0;
	new = (char)s;
	while (i != n)
	{
		if (*new + i == c)
			return (*new + i);
		i++;
	}
	return (0);
}