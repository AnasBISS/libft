/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:36:28 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/12 21:26:25 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		++s;
	}
	return (0);
}
// #include<stdio.h>
// #include<stddef.h>
// #include<string.h>
// int main() {
//     const char str[] = "This is a test string.";
//     int target = 't';

//     size_t n = strlen(str);
//     void *result = ft_memchr(str, target, n);
// 	void *result = memchr(str, target, n);

//     if (result != NULL) {
//         printf("Found '%c' at position: %ld\n", target, result);
//     } else {
//         printf("'%c' not found in the string.\n", target);
//     }

//     return 0;
// }

