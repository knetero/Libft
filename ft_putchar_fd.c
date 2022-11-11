/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:47:19 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/11 12:13:16 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main()
// {
//     int fd;
	
// 	fd = open("test.txt" , O_CREAT | O_RDWR);
//     ft_putchar_fd('H', fd);
// }
