/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:24:58 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/12 21:12:30 by anbouaba         ###   ########.fr       */
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
// }
// int main() {
//     int myArray[10] = {2, 1, 3, 4, 5};  // Declare an integer array of size 10
// 	int special[10];

//     // Use your custom my_memset function to set the entire array to zero
   
// 	memset(myArray, 1, 8);

//     // Print the contents of the array
//     for (int i = 0; i < 10; i++) {
//         printf("myArray[%d] = %d\n", i, myArray[i]);
		
//     }

//     return 0;
// }
