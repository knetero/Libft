/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:15:10 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/05 16:53:44 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	while (index != 0)
	{
		if (s[index] == (unsigned char)c)
		{
			return ((char *)s + index);
		}
		index--;
	}
	if (s[0] == (unsigned char)c)
		return ((char *)s);
	return (0);
}
// int main()
// {
//     char s[] = "efwef";
//     int c = 'f';
//     printf("%s\n", ft_strrchr(s, c));
//     // printf("'%s'\n", strrchr(s, c));
// }i
