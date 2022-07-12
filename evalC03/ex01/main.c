int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "abc123";
	char s2[] = "1";
	int strncmp_r;
	strncmp_r = ft_strncmp(s1,s2,8);

	printf("strncmp() function: %d\n", strncmp(s1,s2,8));
	//printf("ft_strncmp() function: %d\n", ft_strncmp(s1,s2,8));
	printf("%d\n", strncmp_r);
	return (0);
}
