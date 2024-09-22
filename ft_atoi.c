/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 02:49:26 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/22 17:35:29 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int atoi(const char *str)
{
    size_t  i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (ft_isdigit(str[i]))
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

/*
int main()
{
    char    *str = "  -129hola2";
    printf("%d\n", atoi(str));
    printf("%d\n", ft_atoi(str));
    return (0);
}
*/