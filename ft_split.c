/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:24:55 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/02 11:48:15 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int w_count(char *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            count++;
            while (s[i] != c && s[i])
                i++;
        }
        else
            i++;
    }
    return (count);
}
int chr_count(char *s, char c)
{
    int i;

    i = 0;
    while (s[i] != c && s[i])
        i++;
    return (i);
}
void ft_free(char **tab)
{
    int i;
    
    i = 0;
    while(tab[i])
    {
        free(tab[i]);
        i++;
    }
    free(tab);
}
char **ft_split(char const *s, char c)
{
    char **tab;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    if (!s)
        return (NULL);
    tab = (char **)malloc(sizeof(char *) * (w_count((char *)s, c) + 1));
    if(!tab)
        return (NULL);
    while(s[i])
    {
        if(s[i] != c)
        {
            tab[j] = (char*)malloc(sizeof(char) * (chr_count((char*)s + i, c) + 1));
             if(!tab[j])
            {
                ft_free(tab);
                return (NULL);
            }
            while(s[i] != c && s[i])
            {
                tab[j][k] = s[i];
                i++;
                k++;
            }
            tab[j][k] = '\0';
            j++;
            k = 0;
        }
        else
            i++;
    }
    tab[j] = NULL;
    return (tab);
}
// int main()
// {
//    char **tab;
//    int i;
   
//    i = 0;
//    tab = ft_split("leo,messi,10", ',');
//    while(tab[i])
//     {
//         printf("%s\n", tab[i]);
//         i++;
//     }
// }