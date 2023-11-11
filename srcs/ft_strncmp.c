/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:07:06 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/05 23:15:30 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] > s2[i]  || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
int main()
{
	char str1[] = "";
	char str2[] = "";

	size_t n = 2;

	printf("%d\n", ft_strncmp(str1, str2, n));
	printf("%d\n", strncmp(str1, str2, n));
}
