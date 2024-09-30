/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:24:02 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/30 16:22:12 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	num_strings(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == c)
			i = 0;
		else if (!i)
		{
			i = 1;
			count++;
		}
		str++;
	}
	return (count);
}

static	char	*create_strings(char const *s, char **dst, char c, size_t len)
{

}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	len;

	if (!s)
		return (NULL);
	len = num_strings(s, c);
	dst = (char **)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	return (create_strings(s, dst, c, len));
}