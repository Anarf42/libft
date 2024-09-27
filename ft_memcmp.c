/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:15:06 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/27 01:40:46 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*newstr1;
	unsigned char	*newstr2;
	size_t			i;

	newstr1 = (unsigned char *)s1;
	newstr2 = (unsigned char *)s2;
	i = 0;
	while ((newstr1[i] == newstr2[i]) && newstr1[i] && newstr2[i]
		&& (i < n - 1))
		i++;
	return (newstr1[i] - newstr2[i]);
}
