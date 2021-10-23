/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:52:53 by omsanfor          #+#    #+#             */
/*   Updated: 2021/10/21 19:10:03 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_calloc(size_t count, size_t size)
{   
    void *new;
    
    new = malloc(size * count);
    ft_bzero(new);
    return (new);
}