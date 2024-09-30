/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:47:21 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/29 18:51:48 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*news;
	char	newc;
	int		i;

	news = (char *)s;
	newc = (char)c;
	i = 0;
	while (news[i] && news[i] != newc)
		i++;
	if (news[i] == newc)
		return (news + i);
	else
		return (0);
}
