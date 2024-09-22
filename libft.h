/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:13:22 by anruiz-d          #+#    #+#             */
/*   Updated: 2024/09/22 20:10:37 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int	ft_toupper(int	ch);
int	ft_tolower(int ch);
int atoi(const char *nptr);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_memcmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *str);

size_t  ft_strlen(const char *str);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);

void    *ft_bzero(void *s, size_t n);
void    *ft_memset(void *s, int c, size_t n);
//void    *ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
void    *calloc(size_t count, size_t size);

char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strdup(const char *s);


#endif