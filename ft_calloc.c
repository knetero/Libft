/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:47:46 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/05 13:31:37 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(count * size);
	if (!ptr)
	{
		return (NULL);
	}
	else
		ft_bzero(ptr, count * size);
	return (ptr);
}
// int main()
// {
//     printf("%p\n", ft_calloc(25,sizeof(int)));
//     printf("%p", calloc(25,sizeof(int)));
//     return 0;
// }
