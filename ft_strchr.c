/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:15:09 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/17 14:32:32 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if(s[i] == c)
            return((char*)s + i);
        i++;
    }
    if (s[i] == '\0' && c == '\0')
        return ((char *)(s + i));
    return (NULL);
}
int main()
{
    char *s = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
    printf("|%s|\n", ft_strchr(s, '\0'));
    printf("|%s|\n", strchr(s, '\0'));
}