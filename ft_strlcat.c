/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:20:58 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/13 03:28:37 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen1(const char *s)
{
	size_t		i = 0;
	while (s && s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;
	size_t	j;

	i = 0;
	d = ft_strlen1(dst);
	s = ft_strlen(src);
	j = d;
	if (!dst && dstsize == 0)
		return s;
	if ((s > d && dstsize <= d) || (s < d && dstsize < d))
		return s + dstsize;
	if (s == 0 || dstsize <= d)
		return (d + dstsize);
	while (src[i] && i < dstsize - d - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstsize + s);
}
int main()
{

	// printf("my = %lu\n", ft_strlcat("abcdefghoj", "abcdefg", 20));
	// printf("sys = %lu\n", ft_strlcat(NULL, NULL, 0));
	// printf("sys = %lu\n", ft_strlcat(NULL, "efcec", 0));
	// printf("sys = %lu\n", ft_strlcat(NULL, "wdescd" , 0));
	// printf("sys = %lu\n", ft_strlcat("efcde", NULL , 0));

	// printf("sys = %lu\n", strlcat("efcde", NULL , 0));

}
