/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:20:09 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/26 17:56:44 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int k;
    char *str;

    i = 0;
    k = 0;
    j = ft_strlen(s1);
    while (s1[i] && ft_strchr(set, s1[i]))//T9ALAB LIYA 3LA CHAR WACH KAYN MN LQODAM
    {
        i++;
    }
    while (j > i && ft_strchr(set, s1[j]))//WACH KAYN MN LOR 
    {
        j--;
    }
    str = (char*)malloc(sizeof(char) * (j - i + 2));
    if (str == '\0')
        return (NULL);
    while (i <= j)
    {
        str[k] = s1[i];
        i++;
        k++;
    }
    str[k] = '\0';
    return (str);
}
// int main()
// {
//     char *str1 = "\0";
//     char *str2 = "\0";
//     char *str3 = ft_strtrim(str1, str2);
//     printf("%s", str3);
// }