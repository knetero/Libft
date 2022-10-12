/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:47:42 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/12 12:14:49 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H
#define NULL __DARWIN_NULL




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
char *ft_strchr(const char *s, int c);
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t size);

#endif