/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:50:15 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/14 15:30:48 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main()
// {
//     t_list *i;
//     i = ft_lstnew("hello");
//     ft_lstadd_front(&i, ft_lstnew("world"));
//     printf("%s\n", i->content);
//     printf("%s", i->next->content);
// }
//1 -we modify the link part of the new node to point to the first node
//2- we modify the head pointer to point to the new node