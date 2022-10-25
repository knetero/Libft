/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:15:09 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/24 19:45:02 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if(s[i] == (unsigned char)c)
            return((char*)s + i);
        i++;
    }
    if (s[i] == '\0' && c == '\0')
        return ((char *)(s + i));
    return (NULL);
}
// int main()
// {
//     char *s = "there is sso";
//     int c = 's';
//     printf("|%s|\n", ft_strchr(s, c));
//     printf("|%s|\n", strchr(s, c));
// }