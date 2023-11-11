/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:36:28 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/08 01:31:07 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
void	*ft_memchr(const void *s,int c, size_t n)
{
	size_t			i;
	const unsigned char *p = (const unsigned char)s;
	unsigned char		b = (unsigned char)c;

	i = 0;
	while (i < n)
	{
		if (p[i] == b)
			return ((void *)(p + i));
		i++;
	}
}
#include<stdio.h>
#include<stddef.h>
#include<string.h>
int main() {
    const char str[] = "This is a test string.";
    int target = 't';

    size_t n = strlen(str);
    void *result = ft_memchr(str, target, n);
	void *result = memchr(str, target, n);

    if (result != NULL) {
        printf("Found '%c' at position: %ld\n", target, (char *)result - str);
    } else {
        printf("'%c' not found in the string.\n", target);
    }

    return 0;
}

