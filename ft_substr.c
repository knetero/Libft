/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                              0                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:39:13 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/22 19:30:39 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*str;
    size_t	i;

    i = 0;
    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        return (ft_strdup("\0"));
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == '\0')
        return (NULL);
    while (i < len)
    {
        str[i] = s[start]; 
        i++;
        start++;
    }
    str[i] = '\0';
    return (str);
}
// int main()
// {
//     char *str = "i just want this part #############";
//     printf("%s", ft_substr(str, 5, 10));
// }
