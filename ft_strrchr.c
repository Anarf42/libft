/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:51:11 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/19 01:54:00 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char    *newstr;
    char    a;
    int i;

    newstr = (char *)s;
    a = (char)c;
    i = ft_strlen(newstr);
    while (i > 0 && newstr[i] != a)
        i--;
    if (newstr[i] == a)
        return (newstr[i]);
    else
        return (0);
}
