/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:47:42 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/09 15:39:30 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H


# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>


int	ft_isalnum(int i);
int	ft_isalpha(int c);
int	ft_isascii(int s);
int	ft_isdigit(int c);
int	ft_isprint(int j);
void ft_bzero(void *s, size_t n)
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t size);

#endif