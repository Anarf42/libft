/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ana <Ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:07:59 by Ana               #+#    #+#             */
/*   Updated: 2024/09/27 02:07:38 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*news;

	i = 0;
	news = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !news)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (i < len)
	{
		news[i] = s[i + start];
		i++;
	}
	news[i] = '\0';
	return (news);
}
