/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:47:21 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/19 01:49:47 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    *newstr;
    char    a;
    int i;

    newstr = (char *)s;
    a = (char)c;
    i = 0;
    while (newstr[i] && newstr[i] != a)
        i++;
    if (newstr[i] == a)
        return (newstr[i]);
    else
        return (0);
}