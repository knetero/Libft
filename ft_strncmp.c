/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:06:50 by abazerou          #+#    #+#             */
/*   Updated: 2022/10/17 15:43:13 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	char *ss1 = (char*)s1;
	char *ss2 = (char*)s2;
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
int main()
{
	char s1[] = "\200";
	char s2[] = "\0";
	printf("%d | ", ft_strncmp(s1, s2, 5));
	printf("%d", strncmp(s1, s2, 5));
}