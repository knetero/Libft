/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:47:42 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/18 11:29:36 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

#define NULL 0




# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>


int	ft_isalnum(int i);
int	ft_isalpha(int c);
int	ft_isascii(int s);
int	ft_isdigit(int c);
int	ft_isprint(int j);
void ft_bzero(void *s, size_t n);
void *ft_memset(void *ptr, int i, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int    ft_atoi(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnstr(const char *s, const char *d, size_t len);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif