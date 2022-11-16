/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:06:06 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/16 20:56:26 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*p;

	p = ptr;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (ptr);
}
// int main()
// {
// 	int *i;
// 	ft_memset(i, 57, 1);
// 	ft_memset((char*)i+1,5,1);
//     printf("%d", *i);
// 	return (0);
// }