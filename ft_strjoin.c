/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:28:54 by Ana               #+#    #+#             */
/*   Updated: 2024/10/08 01:45:08 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	n;
	size_t	a;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	n = ft_strlen(s2);
	a = i + n + 1;
	newstr = (char *)malloc(sizeof(char) * (a));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, i + 1);
	ft_strlcat(newstr, s2, a);
	return (newstr);
}
