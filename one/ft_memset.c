/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:17:31 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/09 15:34:36 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void *ft_memset(void *str, int a, size_t len)
{
	unsigned char *str_a;
	int i;

	str_a = (unsigned char*)str;
	i = 0;
	while (i != len)
	{
		*(str_a + i) = (unsigned char)a;
		i++;
	}
	
	return (str);
}

int main()
{
	char *a;

	a = malloc(10 *	sizeof(char));
	a = ft_memset(a, 'w', 10);
	write(1, a, 10);
	return 0;
}
