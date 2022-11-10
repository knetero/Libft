/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:24:35 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/08 11:45:58 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	if (dst_size == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_size <= dst_len)
		return (src_len + dst_size);
	while (dst[i])
		i++;
	while (src[j] && j < dst_size - dst_len - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
// int main()
// {
// 	char src[] = "hello";
// 	char dst[] = "oiop";
// 	unsigned int a;
// 	a = ft_strlcat(dst, src, 10);
// 	printf("%u\n", a);
// 	printf("%s", dst);
// }
