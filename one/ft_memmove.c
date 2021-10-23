/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:42:32 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/09 20:01:32 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *b, const void *a, size_t len)
{
	size_t i;

	i = 0;
	if (a < b)
	{
		while (len)
		{
			len--;
			*((unsigned char*)b + len) = *((unsigned char*)a + len);
		}
	}
	else
	{
		while (i < len)
		{
			*((unsigned char*)b + i) = *((unsigned char*)a + i);
			i++;
		}
	}
return (a);
}

int main()
{
    char a[] = "0123456789";
	printf("old %s",a);
	ft_memmove(a + 2, a, 5);
    printf("new %s",a);
    return (0);
}
