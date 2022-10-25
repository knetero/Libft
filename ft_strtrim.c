/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:20:09 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/24 16:19:57 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    j = 0;
    k = 0;
    if (s1 == '\0' || set == '\0')
        return (NULL);
    if(!(str = (char *)malloc(sizeof(char) * (ft_strlen(s1)))))
    {
        return (NULL);
    }
    while (s1[i])
    {
        if (set[j] == s1[i])
        {
            i++;
            j++;
        }
        else
        {
            str[k] = s1[i];
            i++;
            k++;
        }
    }
    str[k] = '\0';
    return (str);
}
// int main()
// {
//     char *str1 = "   xxxtripouille ";
//     char *str2 = " x";
//     char *str3 = ft_strtrim(str1, str2);
//     printf("%s", str3);
// }
