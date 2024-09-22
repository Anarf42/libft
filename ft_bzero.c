/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:25:54 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/22 20:18:42 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_bzero(void *s, size_t n)
{/*
    char    *str;
    size_t  i;

    str = (char *)s;
    i = 0;
    while (i < n)
    {
        str[i] = '0';
        i++;
    }
    return (s);
    */
    ft_memset(s, 0, n);
    return (s);
}
