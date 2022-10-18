/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:28:05 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/18 11:31:29 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *str1 = (char*)s1;
    char *str2 = (char*)s2;
    i = 0;
    if(n == 0)
        return(0);
    while((str1[i] || str2[i]) && i < n)
    {
        if(str1[i] == str2[i])
            i++;
        else
            return (str1[i] - str2[i]);
    }
    return (0);
}
// int main()
// {
//     char s1[] = "\xff\xaa\xde\xffMACOSX\xff";
//     char s2[] = "\xff\xaa\xde\x02";
//     printf("%d\n", ft_memcmp(s1, s2, 8));
//     printf("%d\n", memcmp(s1, s2, 8));
// }