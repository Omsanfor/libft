/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:28:10 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/16 13:14:22 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
	size_t j;

    i = 0;
	j = 0;
	if (needle == NULL)
		return ((char*)haystack);
    while ((*(haystack + j)) != '\0')
	{
		while (((*(haystack + i + j)) == (*(needle + i))) && (i + j < len))
			{
				printf("%c = %c\n", *(haystack + i + j), *(needle + i));
				i++;
				if ((*(needle + i) == '\0') || (i + j == len))
				{
					printf("j = %i, i = %i\n", j, i);
					return ((char*)(haystack + j));
				}
			}
		j++;
		i = 0;
	}
	return (0);
}


int main()
{
	char* str1 = strdup("Hello world!");
	char* str2 = strdup("llo");

	printf("s=%s\n", ft_strnstr(str1,str2, 10));
}