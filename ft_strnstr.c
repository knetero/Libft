/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:59:52 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/11 13:18:23 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		k = i;
		while (haystack[k] == needle[j] && k < len && needle[j])
		{
			k++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
// int main ()
// {
//     char *str1 = "HEY HELLO FRIEND";
//     char *str2 = "LLO";
//     printf("%s\n", ft_strnstr(str1, str2, 18));
//     printf("%s", ft_strnstr(str1, str2, 18));
// }
