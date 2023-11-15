/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:02:49 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/15 00:44:30 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// #include<ctype.h>
// #include<stdio.h>
// int main()
// {
// 	int b = 45464865;
// 	printf("%d\n", ft_isalpha(b));
// 	printf("%d\n", isalpha(b));
// 	return 0;
// }
