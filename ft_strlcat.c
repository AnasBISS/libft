/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:20:58 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/15 00:22:36 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	s_dest;
	size_t	s_src;
	size_t	result;

	if (size == 0)
		return (ft_strlen(src));
	if (size < ft_strlen(dest))
		result = (size + ft_strlen(src));
	else
		result = ft_strlen(src) + ft_strlen(dest);
	s_dest = ft_strlen(dest);
	s_src = ft_strlen(src);
	i = 0;
	while (src[i] && (i + s_dest < size - 1))
	{
		dest[s_dest + i] = src[i];
		i++;
	}
	dest[s_dest + i] = '\0';
	return (result);
}
// int main()
// {

// // 	// printf("my = %lu\n", strlcat("abcdefghoj", "abcdefg", 5));
// // 	printf("sys = %lu\n", strlcat(NULL, "abcdef", 0));
// // 	// printf("sys = %lu\n", ft_strlcat(NULL, "efcec", 0));
	// printf("sys = %lu\n", ft_strlcat(NULL, "wdescd" , 0));
// // 	// printf("sys = %lu\n", ft_strlcat("efcde", NULL , 0));./	

// // 	// printf("sys = %lu\n", strlcat("efcde", NULL , 0));

// }
