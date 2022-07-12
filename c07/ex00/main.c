#include <stdio.h>
#include <string.h>

int	main()
{
	char	src [] = "hello";
	char	dest [] = "byebye";
	char	*pdest;

	printf("Before: \n\thello: %s\n", src);
	printf("\tbyebye: %s\n", dest);
	pdest = strdup(dest);
	printf("After: \n\thello: %s\n", src);
	printf("\tbyebye: %s\n", pdest);
}
