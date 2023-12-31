/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:07:06 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/15 00:37:06 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str1, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str;
	s2 = (unsigned char *)str1;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char str1[] = "";
// 	char str2[] = "";

// 	size_t n = 2;

// 	printf("%d\n", ft_strncmp(str1, str2, n));
// 	printf("%d\n", strncmp(str1, str2, n));
// }
