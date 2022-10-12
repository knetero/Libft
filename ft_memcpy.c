/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:36:10 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/12 13:17:00 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;
    i = 0;
    char *chsrc = (char*)src; 
    char *chdest = (char*)dest;
    while(chsrc[i] && i < n)
    {
        chdest[i] = chsrc[i];
        i++;
    }
    return (chdest);
}
// int main()
// {
//     char src[] = "12345";
//     char dst[] = "hello";
//     ft_memcpy(dst, src, 7);
//     printf("%s", dst);
}