/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:47:41 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/12 21:20:31 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>
#include<string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

len = ft_strlen((char *)s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
// #include<stdio.h>
// int main()
// {
// 	char str[] = "yassine";
// 	int c = '\0';

// 	printf("%p\n", ft_strrchr(str, c));
// 	printf("%p\n", strrchr(str, c));
// }
