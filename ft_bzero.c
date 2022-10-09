/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:57:54 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/09 17:57:57 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_bzero(void *s, size_t i)
{
    ft_memset(s, 0, 3);
}
int main()
{
    char str[] = "HELLO WORLD";
    ft_bzero(str,3);
    // bzero(str, 5);
    puts(str);
}