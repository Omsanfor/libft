/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:10:21 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/23 18:32:30 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_mem_lol(int n, char **h)
{
	int i;

	i = 0;
	if (n == 0)
	{
		*h = ft_strdup("0");
		if (*h == NULL)
			return (-1);
		return (-2);
	}
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);	
}

char *ft_create_malloc(int i)
{
	char *lol;
	
	lol = (char*)malloc(sizeof(char*) * (i + 1));
	if (lol == NULL)
		return (NULL);
	return (lol);	
}

char *ft_itoa(int n)
{
	char *lol;
	int len;
	unsigned int tmp;

	tmp = n;
	len = ft_mem_lol(n, &lol);
	if (lol == NULL)
		return (NULL);
	if (len == -2)
		return lol;
	lol = ft_create_malloc(len);
	if (!lol)
		return (NULL);
	lol[len--] = '\0';
	if (n < 0)
		tmp = -n;
	while (tmp)
	{
		lol[len--] = (tmp % 10) + '0';
		tmp = tmp / 10;
		if ((len == 0) && (n < 0))
			lol[0] = '-';
	}
	return (lol);
}

int main()
{
	int x;
	char *lol;

	x = 2147483647;
	lol = ft_itoa(x);
	printf("%s",lol);
	return (0);	
}
