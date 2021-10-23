/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:24:15 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/21 19:08:41 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (((*str > 8) && (*str < 14)) || (*str == 32))
		str++;
	while ((*str == 43) || (*str == 45))
	{
		if (*str == 45)
			i = -1 * i;
		str++;
	}
	while ((*str > 47) && (*str < 58))
	{
		if (i < 0)
			j = j * 10 - *str + 48;
		else
			j = j * 10 + *str - 48;
		str++;
	}
	return (j);
}