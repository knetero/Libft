/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:06:06 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/05 14:23:49 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int i, size_t n)
{
	char	*p;

	p = ptr;
	while (n > 0)
	{
		*p = i;
		p++;
		n--;
	}
	return (ptr);
}
// int main()
// {
//     char str[] = "HELLO WORLD";
//     ft_memset(str, ' ',3);
//     printf("%s", str);
// }
