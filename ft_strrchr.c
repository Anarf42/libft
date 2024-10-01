/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:51:11 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/10/01 05:04:57 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*newstr;
	char	a;
	int		i;

	newstr = (char *)s;
	a = (char)c;
	i = ft_strlen(newstr);
	if (!a)
		return (newstr + i);
	while (i != 0)
	{
		if (newstr[i] == a)
			return (newstr + i);
		i--;
	}
	if (newstr[0] == a)
		return (newstr);
	return (0);
}
