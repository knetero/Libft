/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:15:09 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/13 21:58:40 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)s + i);
	else
		return (0);
}
// int main()
// {
//     char *s = "there is sso";
//     int c = 's';
//     printf("|%s|\n", ft_strchr(s, c));
//     printf("|%s|\n", strchr(s, c));
// }  
