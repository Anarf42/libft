/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:55:25 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/19 02:02:48 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    char    *newstr1;
    char    *newstr2;
    size_t i;

    newstr1 = (char *)s1;
    newstr2 = (char *)s2;
    i = 0;
    while ((newstr1[i] || newstr2[i]) && i < n)
    {
        if (newstr1[i] != newstr2[i])
            return (newstr1[i] - newstr2[i]);
        i++;
    }
        return (0);
}