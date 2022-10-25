/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:59:52 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/25 11:04:22 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strnstr(const char *s, const char *d, size_t len)
{
    char *str = (char*)s;
    char *to_find = (char*)d;
    
    
    if(*to_find == 0)
    {
        return str;
    }
    while(*str != '\0' && len > 0)
    {
        if(*str == *to_find)
        {
            return str;
        } 
        str++;
        len--;
    }
    return NULL;
}
int main()
{
    char s1[] = "hellowwworld";
    char s2[] = "";
    printf("%s | ", strnstr(s1, s2, 14));
    printf("%s", ft_strnstr(s1, s2, 14));
}