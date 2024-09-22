/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:36:08 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/22 19:02:09 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *calloc(size_t count, size_t size)
{
    size_t  i;
    void    *str;

    i = count * size;
    str = malloc(i);
    if (!str)
        return (NULL);
    ft_memset(str, 0, i);
    return (str);
}