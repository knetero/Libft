/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:59:52 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/17 16:37:13 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *ft_strnstr(const char *s, const char *d, size_t len)
// {
//     int i;
//     char *str = (char*)s;
//     char *to_find = (char*)d;
//     while(str[i] && len > 0)
//     {
//         if(to_find[i] == str[i])
//         {
//             return *str + i;
//             i++;
//         }
//     }
//     return 0;
// }
int main()
{
    char s1[] = "hello;
    char s2[] = "j";
    printf("%s", strnstr(s1, s2, 23));
}