/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:40:50 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/23 17:56:41 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void ft_free_mas(char **mas, int j)
{
	while (j >= 0)
	{
		free(mas[j]);
		j--;
	}
	free(mas);
}

char ft_count_str(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if(s[i] != c)
		{
			while (s[i] != c)
				i++;
			count++;
		}
		else 
			i++;
	}
	return (count);
}

char **ft_lol(char **mas, char const *s, char c, int i, int j)
{
	int start;
	
	start = 0;
	while (s[i])
	{
		while(s[i] != c)
		{
			i++;
			if(s[i] == c && (start != i))
			{
				mas[j] = ft_substr(s, start, (i - start));
				if (mas[j] == NULL)
					{
						ft_free_mas(mas, j);
						return (NULL);
					}
				j++;
				start = i + 1;
			}
		}
		i++;
	}
	mas[j] = NULL;
	return (mas);	
}

char **ft_split(char const *s, char c)
{
	char **mas;
	int i;
	int j;
	
	i = 0;
	j = 0;
	mas = (char**)malloc(sizeof(char*) * (ft_count_str(s, c) + 1));
	if (mas == NULL)
		return (NULL);
	return (ft_lol(mas, *s, c, i, j));
}
