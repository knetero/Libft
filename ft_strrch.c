/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:15:10 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/12 14:15:45 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *ft_strchr(const char *s, int c)
// {
//     int i;
//     i = 0;
//     while(s[i])
//     {
//         if(s[i] == c)
//         {
//             return((char*) s + i);
//         }
//         i++;
//     }
//     return NULL;
// }
int main()
{
    char s[] = "whoareyouyesyep";
    int c = 'a';
    // printf("%s\n", ft_strchr(s, c));
    
    printf("'%s'\n", strrchr(s, c));
}
