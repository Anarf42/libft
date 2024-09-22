/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:42:32 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/19 01:45:37 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  l;

    i = 0;
    l = 0;
    while (dst[i])
        i++;
    while (src[l] && l < dstsize - 1)
    {
        dst[i] = src[l];
        i++;
        l++;
    }
    dst[i] = '\0';
    return (i);
}