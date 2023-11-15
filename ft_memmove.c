/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:51:05 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/15 03:45:12 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}

int main()
{
	char dest[] = "abcdefghijklmopq";
	char src[] = "fylally";
	printf("%s\n", ft_memmove(dest, src, ft_strlen(src)));
	//printf("%d\n", ft_memmove(dest, src, 0));
	// printf("%s\n", memmove(dest, src , 12));
	//printf("%d\n", memmove(dest, src, 8));
}
