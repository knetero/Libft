/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:24:35 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/25 10:46:59 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;
    size_t  j;

    j = 0;
	lsrc = ft_strlen (src);
	ldst = ft_strlen (dst);
	i = lsrc + ldst;
	if (ldst >= size)
		return (lsrc + size);
	while (src[j] != '\0' && ldst < size - 1)
	{ 
		dst[ldst] = src[j];
		ldst++;
		j++;
	}
	dst[ldst] = '\0';
	return (i);
}
// int main()
// {
//     char dst[] = "hello";
//     char src[] = "coucou";
//     printf("%zu | ", ft_strlcat(dst, src, 10));
//     printf("%zu ", strlcat(dst, src, 5));
// }