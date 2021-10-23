/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:45:10 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/21 19:08:52 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_bzero(void *str, size_t len)
{
	size_t i;

	i = 0;
	while (i != len)
	{
		*((unsigned char *)str + i) = (unsigned char)0;
		i++;
	} 
}	