/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:24:35 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/20 17:21:15 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    int dlen;
    int slen;

    i = 0;
    dlen = ft_strlen(dst);
    slen = ft_strlen(src);
    if(!src)
        return(dlen);
    while (src[i] && i < (size - dlen - 1))
    {
        dst[dlen + i] = src[i];
        i++;
    }
    dst[dlen + i] = '\0';
    return(dlen + slen);
}
// int main()
// {
//     char s1[] = "hello";
//     char s2[] = "world";
//     printf("%lu\n", ft_strlcat(s2, s1, 4));
//     printf("%lu", strlcat(s2, s1, 4));
// }