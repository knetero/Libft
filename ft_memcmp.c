/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:28:05 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/13 17:10:04 by abazerou         ###   ########.fr       */
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
//     char s1[] = "afreyouxxz";
//     char s2[] = "zbdcdefjh";
//     printf("%d", ft_memcmp(s1, s2, 8));
//     // printf("%d", memcmp(s1, s2, 5));
// }