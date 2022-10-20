/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:44:20 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/19 10:23:17 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *p;
    char *str = (char*)s1;
    int i;

    if(!(p = (char*)malloc(ft_strlen(str) * sizeof(char))))
        return NULL;
    while(*str)
    {
        p[i]= *str;
        str++;
        i++;
    }
    p[i] = '\0';
    return (p);
}
// int main()
// {
//     char s1[] = "hello world";
//     char *saved;
//     printf("%s | ", saved = ft_strdup(s1));
//     printf("%s",saved = strdup(s1));
// }