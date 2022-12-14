/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:44:20 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/17 14:56:52 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	char	*str;
	int		i;

	str = (char *)s1;
	i = 0;
	p = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	if (!p)
		return (NULL);
	while (*str)
	{
		p[i] = *str;
		str++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
