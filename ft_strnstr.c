/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:59:52 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/13 19:25:44 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s, const char *to_find, size_t len)
{
       
}
int main()
{
    char s1[] = "hello friend";
    char s2[] = "friend";
    printf("%s", strnstr(s1, s2, 12));
}