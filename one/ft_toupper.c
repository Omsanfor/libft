/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:50:18 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/10 15:01:20 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>

int ft_toupper(int c)
{
	if ((c > 96) && (c < 123)) 
		c = c - 32;
	return (c);
}

int main()
{
	char c;

	c = 'z';
	c = ft_toupper(c);
	write(1, &c, 1);
	return (0);
}
