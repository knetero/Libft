/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:36:10 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/17 15:12:56 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned int i;
    i = 0;
    const char *chsrc = src; 
    char *chdest = dest;
    while(chsrc[i] && i < n)
    {
        chdest[i] = chsrc[i];
        i++;
    }
    return (chdest);
}
int main()
{
    char src[] = "12345";
    char dst[] = "hello";
    printf("%s | ", ft_memcpy(dst, src, 3));
    printf("%s ", memcpy(dst, src, 3));
}