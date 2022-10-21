/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:07:43 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/20 12:33:56 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ch;
    size_t i;
    ch = (unsigned char *) s;
    i = 0;
    while(i < n)
    { 
        if(ch[i] == c)
        {
            return(ch + i);
        }
        i++;
    }
    return NULL;
}
// int main()
// {
//     char s[] = {0, 1, 2 ,3 ,4 ,5};
//     int c = '0';
//     printf("%s\n", ft_memchr(s, 2 + 256, 3));
//     printf("'%s'\n", memchr(s, 2 + 256, 3));
// }