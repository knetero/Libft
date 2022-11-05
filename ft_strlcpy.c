/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:05:58 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/05 15:37:19 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
// int main()
// {
// 	char src[] = "hello";
// 	char dst[] = "oiop";
// 	unsigned int a;
// 	a = ft_strlcpy(dst, src, 3);
// 	printf("%u\n", a);
// 	printf("%s", dst);
// }
