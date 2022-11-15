/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:06:06 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/15 13:05:44 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*p;

	p = ptr;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (ptr);
}
// int main()
// {
// 	int *i;
// 	ft_memset(i, 8, 1);
// 	ft_memset((unsigned char *)i+1,7,1);
//     printf("%d", *i);
// 	return (0);
// }