/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:42:33 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/06 22:54:36 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return (NULL);
}
#include<stdio.h>
int main()
{
	char str[] = "sfijfdihcferftrh";
	int	c = 0;

	printf("%p\n", ft_strchr(str, c));
	printf("%p\n", strchr(str, c));
}
