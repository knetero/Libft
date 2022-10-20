/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:28:15 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/20 09:44:38 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *pdst = (char*)dst;
    const char *psrc = (const char*)src;
    char *tmp;
    unsigned int i;
    
    while(psrc[i] && i < len)
    {
        tmp[i] = psrc[i];
        i++;
    }
    while(tmp[i] && i < len)
    {
        pdst[i] = tmp[i];
        i++;
    }
    pdst[i] = '\0';
    return (pdst);
}
int main()
{
    char src[] = "coucou";
    char dst[100] = "hello";
    printf("%s | ", ft_memmove(dst, src, 8));
    printf("%s ", memmove(dst, src, 8));
}
