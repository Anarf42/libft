/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ana <Ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:42:32 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/27 02:00:43 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

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
/*
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  dst_len;
    size_t  src_len;
    size_t  i;
    size_t  j;

    dst_len = 0;
    src_len = 0;
    while (dst[dst_len] && dst_len < dstsize)  
	// Obtén la longitud de dst sin exceder dstsize
        dst_len++;
    src_len = ft_strlen(src);  // Longitud de src

// Si el tamaño del buffer es menor o igual que dst_len, 
//no hay espacio para concatenar
    if (dstsize <= dst_len)
        return (dstsize + src_len);

    i = dst_len;
    j = 0;
    while (src[j] && i < dstsize - 1)  
// Concatenar src a dst sin exceder dstsize - 1
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';  // Añadir el terminador nulo al final de dst

    return (dst_len + src_len);  
// Longitud total que habrían tenido las cadenas combinadas
}
*/
