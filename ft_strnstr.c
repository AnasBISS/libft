/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:06:50 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/15 00:47:21 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = 0;
	if (!haystack && !len)
		return (NULL);
	while (needle[size] != '\0')
		size++;
	if (needle[j] == 0)
		return ((char *)&haystack[i]);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (j == size)
			return ((char *)&haystack[i - j + 1]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	char str[] = "salut comment ca va";
// 	char str1[] = "comment ca va";
// 	size_t c = 3;
// 	printf("%s\n", ft_strnstr(str, str1, 1));
// }
