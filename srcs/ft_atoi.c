/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:39:42 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/06 18:03:55 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while (str[i] < 32 || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		k = k * 10 + str[i] - 48;
		i++;
	}
	return (j * k);
}
#include<string.h>
#include<stdio.h>
int main()
{
	char	str[] = "  	 	 --994687dsew";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	printf("%d\n", atoi(str));

}
