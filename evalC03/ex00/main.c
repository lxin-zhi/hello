#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "testing123";
	char s2[] = "testing123";
	int strcmp_r = strcmp(s1,s2);
	int ft_strcmp_r = ft_strcmp(s1,s2);

	printf("strcmp() function: %d\n", strcmp_r);
	printf("ft_strcmp() function: %d\n", ft_strcmp_r);
	return (0);
}
