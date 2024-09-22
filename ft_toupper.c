/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:27:45 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/22 20:19:08 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include "stdio.h"

int	ft_toupper(int	ch)
{
	if (ch >= 97 && ch <= 122)
		ch -= 32;
	return (ch);
}
/*
int	main()
{
	char	a;

	a = 'H';
	printf("%d\n", ft_toupper(a));
}
*/