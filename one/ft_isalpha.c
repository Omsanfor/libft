/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:02:18 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/09 13:08:03 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_isalpha(char a)
{
	if (((a >= 'a') && (a <= 'z')) || ((a >= 'A') && (a <= 'Z')))
		return (1);
	else
		return (0);
}
