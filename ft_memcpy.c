/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:36:10 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/10 12:09:48 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    if(dest == 0) 
        return 0;
    unsigned int i;
    i = 0;
    char *ch_dest = (char*) dest;
    char *ch_src = (char*) src;
    while(ch_src[i] && i < n)
    {
        ch_dest[i] = ch_src[i];
        i++;
    }
    return dest;
}
int main()
{
    char src[] = "12345";
    char dst[] = "hello";
    ft_memcpy(dst, src, 3);
    printf("%s", dst);
}