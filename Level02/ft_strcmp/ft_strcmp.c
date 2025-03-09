#include <stdio.h> // for printf --- DELETE

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		printf("*s1: %c\n", *s1);
		printf("*s2: %c\n", *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <string.h> // for strcmp --- DELETE

int	main(int argc, char *argv[])
{
	int	result;
	
	if (argc == 3)
	{
		result = ft_strcmp(argv[1], argv[2]);
		printf("ft_result: %i\n", result);
		result = strcmp(argv[1], argv[2]);
		printf("result: %i\n", result);
	}
	return (0);
}
