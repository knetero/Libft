/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:06:06 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/12 13:10:53 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *ptr, int i, size_t n)
{
	char *p = ptr;
	while(n > 0)
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