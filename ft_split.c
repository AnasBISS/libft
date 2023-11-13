/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:03:48 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/12 22:39:23 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



int	count_word(char const	*str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

char	*malloc_word(const char *str, int i, char c)
{
	int		j;
	char	*tab;
	int		len;

	len = 0;
	j = i;
	while (str[j] && str[j] != c)
	{
		j++;
		len++;
	}
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	j = 0;
	while (j < len)
	{
		tab[j] = str[i];
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (count_word(str, c) + 1));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			tab[j] = malloc_word(str, i, c);
			j++;
		}
		while (str[i] && str[i] != c)
			i++;
	}
	tab[j] = 0;
	return (tab);
}

// int main(int ac ,char **av)
// {
// 	char **result = ft_split(av[1], av[2][0]);
// 	int	i;

// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		// free(result[i]);
// 		i++;
// 	}
// 	free(result);
// }