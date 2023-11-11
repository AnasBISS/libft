/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:08:14 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/08 18:41:49 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char *src1;
	size_t			i;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
int main()
{
	char str[] = "\0";
	char str1[20];

	printf("%s\n", ft_memcpy(str1, str, sizeof(str) - 1));
	printf("%d\n", ft_memcpy(str1 ,str, sizeof(str)));
	printf("%p\n", ft_memcpy(str1, str, sizeof(str)));
	printf("%s\n", memcpy(str1, str, sizeof(str) - 1));
	printf("%d\n", memcpy(str1, str, sizeof(str)));
	printf("%p\n", memcpy(str1, str, sizeof(str)));
}
