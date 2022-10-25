/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:36:10 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/24 16:52:48 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *cstdst;
    unsigned char *cstsrc;
    // size_t i;
    // i = 0;
    if(src == '\0' && dest == '\0')
        return NULL;
    cstsrc = (unsigned char *)src; 
    cstdst = (unsigned char *)dest;
    while(n--)
    {
        *cstdst++ = *cstsrc++;
    }
    return (dest);
} 
// int main()
// {
//     char src[] = "coucou";
//     char dst[] = "hello";mk
//     printf("%s | ", ft_memcpy(dst, src, 1));
//     printf("%s ", memcpy(dst, src, 1));
// }