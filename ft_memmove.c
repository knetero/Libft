/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:28:15 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/30 13:51:17 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *pdst = (char*)dst;
    const char *psrc = (const char*)src;
    
    if(!psrc && !pdst)
        return NULL;
    if(pdst > psrc)
    {
        while(len > 0)
        {
            len--;
            pdst[len] = psrc[len];
        }
    }
    else 
        ft_memcpy(pdst, psrc, len);
    return pdst;
}
// int main()
// {
//     char src[] = "hello word";
//     char dst[] = "friend";
//     printf("%s | ", ft_memmove(dst, src, 7));
//     printf("%s ", memmove(dst, src, 7));
// }
