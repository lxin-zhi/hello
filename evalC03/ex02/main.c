#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char test1[100] = "test1234";
	char test2[] = " bla";
	ft_strcat(test1, test2);
	strcat(test1,test2);
	printf("strcat() function: %s\n", test1);
	printf("ft_strcat function: %s\n", test1);
	return (0);
}
