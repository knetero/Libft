/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:20:09 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/25 15:17:11 by abazerou         ###   ########.fr       */
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
    if (!s1 || !set)
        return (NULL);
    j = ft_strlen(s1) - 1;
    while (s1[i] && ft_strchr(set, s1[i]))//searching for first chr occu
        i++;
    while (j > i && ft_strchr(set, s1[j]))//searching for last chr occu
        j--;
    str = malloc(sizeof(char) * (j - i + 2));
    if (!str)
        return (NULL);
    while (i <= j)
        str[k++] = s1[i++];
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