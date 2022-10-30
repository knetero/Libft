/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:36:10 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/29 18:02:04 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *cstdst;
    unsigned char *cstsrc;
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
//     char dst[] = "hello";
//     printf("%s | ", ft_memcpy(dst, src, 3));
//     printf("%s ", memcpy(dst, src, 3));
// }