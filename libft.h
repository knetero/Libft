/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:47:42 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/02 13:25:51 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H


#define INT_MAX 2147483647
#define INT_MIN -2147483648

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_isalnum(int i);
int	ft_isalpha(int c);
int	ft_isascii(int s);
int	ft_isdigit(int c);
int	ft_isprint(int j);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void    ft_bzero(void *s, size_t n);
void    *ft_memset(void *ptr, int i, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *s, const char *d, size_t len);
void    *ft_calloc(size_t numb, size_t size);
char    *ft_strdup(const char *s1);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);




#endif