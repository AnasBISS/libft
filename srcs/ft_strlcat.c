/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:20:58 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/07 02:54:10 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
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
	d = ft_strlen(dst);
	s = ft_strlen(src);
	j = d;
	if (s == 0 || dstsize <= d)
		return (d + dstsize);
	while (src[i] && i < dstsize - d - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (d + s);
}
int main()
{
	char	str[20] = "";
	char	str1[] = "anassdeofr";
	size_t	n  = 0;

	printf("%lu\n", ft_strlcat(str, str1, n));
	printf("%s\n", str);
	printf("%lu\n", strlcat(str, str1, n));
}
