/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:50:16 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/03 19:55:59 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
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
    write(fd, "\n", 1);

}
// int main()
// {
//     char s[] = "the cake is a lie";
//     ft_putendl_fd(s, 1);
// }