/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:07:43 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/13 12:28:05 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    i = 0;
    char *ch = (char*)s;
    while(ch[i] && n > 0)
    { 
        if(ch[i] == c)
        {
            return(ch + i);
        }
        i++;
    }
    return NULL;
}
int main()
{
    char s[] = "whoareyouyesyep";
    int c = 'w';
    printf("%s\n", ft_memchr(s, c, 10));
    
    // printf("'%s'\n", memchr(s, c, 10));
}