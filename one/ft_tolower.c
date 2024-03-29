/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:03:53 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/10 15:16:56 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int ft_tolower(int c)
{
	if ((c > 64) && (c < 91))
		c = c + 32;
	return (c);
}

int main()
{
	char c;

	c = 'Z';
	c = ft_tolower(c);
	write(1, &c, 1);
	return (0);
}
