/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:37:08 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/19 01:40:46 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  l;

    i = 0;
    l = 0;
    if (!dst && !src)
        return (0);
    while (src[i])
        i++;
    if (size == 0)
        return (i);
    while (src[l] && l < size - 1)
    {
        dst[l] = src[l];
        l++;
    }
    dst[l] = '\0';
    return (i);
}
