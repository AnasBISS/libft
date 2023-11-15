/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:24:58 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/15 03:37:05 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)ptr;
	while (i < num)
	{
		str[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

// int main()
// {	
// 	char	ptr[10];
// 	ft_memset(ptr, '1', 5);
// 	size_t	i = 0;
// 	while (i < ft_strlen(ptr))
// 	{
// 		printf("%c\n", ptr[i]);
// 		i++;
// 	}
// }