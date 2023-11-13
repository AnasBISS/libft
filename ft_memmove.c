/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:51:05 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/12 23:33:21 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memmove(void *dest, const void *src, size_t len)
// {
// 	unsigned char	*dest1;
// 	unsigned char	*src1;
// 	size_t	i;

// 	i = 0;
// 	if (dest == NULL || src == NULL)
// 		return (NULL);
// 	dest1 = (unsigned char *)dest;
// 	src1 = (unsigned char *)src;
// 	if (dest1 > src1)
// 	{
// 		while (len-- > 0)
// 			dest1[len] = src1[len]
// 	}
// 	else
// 		while (i < len)
// 		{
// 			dest1[i] = src1[i];
// 			i++;
// 		}
// 	return (dest);
// }
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
// int main()
// {
// 	char src[20] = "hewtkhghjlghjkhh";
// 	char dest[8] = "fylally";
// 	printf("%s\n", ft_memmove(dest, src, 12));
// 	//printf("%d\n", ft_memmove(dest, src, 0));
// 	printf("%s\n", memmove(dest, src , 12));
// 	//printf("%d\n", memmove(dest, src, 8));
// }
