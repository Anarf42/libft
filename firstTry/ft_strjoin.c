/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ana <Ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:28:54 by Ana               #+#    #+#             */
/*   Updated: 2024/09/27 01:57:47 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	n;
	size_t	a;
	char	*newstr;

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
