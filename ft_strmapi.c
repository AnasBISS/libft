/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:22:27 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/15 00:00:18 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
// char    zebi(unsigned int i, char c)
// {
//     (void)i;
//     c = 'h';
//     return c;
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (!s)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
// int main()
// {
//     char *s = "dsfd";
//     printf("%s\n", ft_strmapi(s, &zebi));
// }
