/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:15:09 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/13 10:59:17 by abazerou         ###   ########.fr       */
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
        {
            return((char*)s + i);
        }
        i++;
    }
    return NULL;
}
int main()
{
    char s[] = "whoareyouyesyep";
    int c = 'y';
    printf("%s\n", ft_strchr(s, c));
    
    // printf("'%s'\n", strrchr(s, c));
}
