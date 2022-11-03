/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:02:01 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/03 19:48:32 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;
    if(!s)
        return ;
    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
// int main()
// {
//     char s[] = "the cake is a lie !\0I'm hidden lol\r\n";
//     ft_putstr_fd(s, 1);
// }
