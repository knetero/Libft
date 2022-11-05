/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:06:50 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/05 16:44:49 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((ss1[i] != '\0' || ss2[i] != '\0') && i < n)
	{
		if (ss1[i] == ss2[i])
			i++;
		else
			return (ss1[i] - ss2[i]);
	}
	return (0);
}
// int main()
// {
// 	char s1[] = "hello";
// 	char s2[] = "heLd";
// 	printf("%d | ", ft_strncmp(s1, s2, 3));
// 	printf("%d", strncmp(s1, s2, 3));
//}
