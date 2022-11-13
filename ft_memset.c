/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:06:06 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/13 15:51:19 by abazerou         ###   ########.fr       */
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
// 	int *i;
// 	ft_memset(i, 8, 1);
// 	ft_memset((unsigned char *)i+1,7,1);
//     printf("%d", *i);
// 	return (0);
// }