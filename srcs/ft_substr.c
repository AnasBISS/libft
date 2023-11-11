#include"libft.a"
#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	if (start >= (unsigned int) ft_strlen(s))
		return (ft_calloc(1, 1));
	i = 0;
	while (s[start + i] && i < len)
		i++;
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);