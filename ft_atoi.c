/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:39:42 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/14 23:44:55 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int						i;
	int						j;
	unsigned long long int	r;

	i = 0;
	j = 1;
	r = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		r = (r * 10) + (str[i] - '0');
		if (r > 9223372036854775807 && j == 1)
			return (-1);
		if (r > 9223372036854775807 && j == -1)
			return (0);
		i++;
	}
	return (r * j);
}
// #include<string.h>
// #include<stdio.h>
// int main()
// {
// 	char	str[] = "9223372036854775887";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));

// }
