/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:07:43 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/15 13:23:39 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	size_t			i;

	cs = (unsigned char *) s;
	i = 0;
	while (i < n)
	{	
		if (cs[i] == (unsigned char)c)
		{
			return (cs + i);
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char s[] = "hello friend";
//     printf("%s\n", ft_memchr(s, 'e', 10));
//     printf("%s\n", memchr(s, 'e', 10));
// }
