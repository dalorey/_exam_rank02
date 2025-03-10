int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h> // for printf --- DELETE
#include <string.h> // for strcmp --- DELETE

int	main(int argc, char *argv[])
{
	int	result;
	
	if (argc == 3)
	{
		result = ft_strcmp(argv[1], argv[2]);
		printf("[ft_strcmp] result: %i\n", result);
		result = strcmp(argv[1], argv[2]);
		printf("[   strcmp] result: %i\n", result);
	}
	return (0);
}
