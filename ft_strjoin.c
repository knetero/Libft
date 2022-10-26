/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:48:18 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/26 10:15:53 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (s1 == '\0' || s2 == '\0')
        return (NULL);
    if(!(str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)))))
    {
        return (NULL);
    }
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return (str);
}
// int main()
// {
//     char *str1 = "hello";
//     char *str2 = "world";
//     char *str3 = ft_strjoin(str1, str2);
//     printf("%s", str3);
// }