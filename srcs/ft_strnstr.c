/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:06:50 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/06 22:47:43 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<xlocale.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = 0;
	while (needle[size] != '\0')
		size++;
	if (needle[j] == 0)
		return (haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (j == size)
			return ((char *)&str[i - j + 1]);
		i++;
	}
}
int main()
{
	char str[] = "salut comment ca va";
	char str1[] = "comment ca va";
	size_t c = 3;
	printf("%s\n", ft_)
}
