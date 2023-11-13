/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:58:36 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/12 21:35:42 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    size_t len1;
    size_t len2;
    char    *result;

    i = 0;
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    if (s1 == NULL || s2 == NULL)
        return (NULL);
    result = (char *)malloc(sizeof(len1 + len2) + 1);
    if (!result)
        return (NULL);
    while (i < len1)
    {
        result[i] = s1[i];
        i++;
    }
    i = 0;
    while (i < len2)
    {
        result[i + len1] = s2[i];
        i++;
    }
    result[len1 + len2] = '\0';
    return (result);
    
}
// int main()
// {
//     char str[] = "erfregrt";
//     char str2[] = "";
//     printf("%s\n", ft_strjoin(str, str2));
// }