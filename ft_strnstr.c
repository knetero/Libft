/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:59:52 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/02 11:48:22 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
    size_t	j;
    
    i = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && i + j < len)
        {
            if (needle[j + 1] == '\0')
                return ((char *)haystack + i);
            j++;
        }
        i++;
    }
    return (NULL);
}
// int main ()
// {
//     char *str1 = "HEY HELLO FRIEND";
//     char *str2 = "L";
//     printf("%s\n", ft_strnstr(str1, str2, 18));
//     printf("%s", ft_strnstr(str1, str2, 18));
// }