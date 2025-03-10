#include <string.h> // for size_t; strspn;
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] != accept[j] && accept[j])
			j++;
		if (accept[j] == '\0')
			break;
		i++;
		j = 0;
	}	
	return (i);
}

int	main(int argc, char *argv[])
{
	size_t	i;
	
	if (argc == 3)
	{
		printf("argv[1] = %s\n", argv[1]);
		printf("argv[2] = %s\n", argv[2]);
		i = ft_strspn(argv[1], argv[2]);
		printf("i = %zu\n", i);
		i = strspn(argv[1], argv[2]);
		printf("i = %zu\n", i);
	}
	return (0);
}
