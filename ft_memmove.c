/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:32:55 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/19 01:35:50 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned    char    *tmpsrc;
    unsigned    char    *tmpdst;
    size_t  i;

    tmpsrc = (unsigned char *)src;
    tmpdst = (unsigned char *)dest;
    i = 0;
    while (i < len)
    {
        tmpdst[i] = tmpsrc[i];
        i++;
    }
    return (dest);
}