/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:32:55 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/10/01 05:01:47 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*tmpsrc;
	unsigned char	*tmpdst;

	tmpsrc = (unsigned char *)src;
	tmpdst = (unsigned char *)dest;
	if (!tmpdst && !tmpsrc)
		return (NULL);
	if (tmpdst < tmpsrc)
		return (ft_memcpy(dest, src, len));
	while (len)
	{
		len--;
		tmpdst[len] = tmpsrc[len];
	}
	return (dest);
}
