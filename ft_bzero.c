/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:57:54 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/24 11:58:55 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t i)
{
    ft_memset(s, 0, i);
}
// int main()
// {
//     char str[] = "HELLO WORLD";
//     ft_bzero(str, 12);
//     puts(str);
// }