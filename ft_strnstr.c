/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:32:59 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/19 02:43:56 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    char   *newbig;

    i = 0;
    j = 0;
    newbig = (char *)big;
    while (len > 0 && newbig[i])
    {
        if (!little[j])
            return (newbig);
        else if (newbig[i] == little[j])
        {
            while (newbig[i] == little[j] && little[j])
            {
                i++;
                j++;
            }
            if (!little[j])
                return (&newbig[i - j]);
        }
    i++;
    len--;
    }
    return (0);
}

int main (void)
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char    *ptr;

    ptr = ft_strnstr(largestring, smallstring, 8);
    printf("%s\n", ptr);
    return (0);

}
