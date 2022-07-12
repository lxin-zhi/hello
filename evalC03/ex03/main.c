#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char test1[10] = "Hello";
	char test2[] = " 42 KL";
	strncat(test1,test2,3);
	//ft_strncat(test1,test2,3);
	printf("strncat() function: %s\n", test1);
	printf("ft_strncat() function: %s\n", test1);
}
