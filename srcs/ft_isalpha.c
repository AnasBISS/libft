int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z'))
		return (1);
	else
		return (0);
}
#include<ctype.h>
#include<stdio.h>
int main()
{
	int b = 45464865;
	printf("%d\n", ft_isalpha(b));
	printf("%d\n", isalpha(b));
	return 0;
}
