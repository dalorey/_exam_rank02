#include <string.h> // for strspn; size_t
#include <stdio.h> // for printf;

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while ((s[i] != reject[j]) && reject[j] != '\0')
			j++;
		if (s[i] == reject[j])
			break;
		j = 0;
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	size_t	cont;
	
	if (argc == 3)
	{
		printf("arg[1]: %s\n", argv[1]);
		printf("arg[2]: %s\n", argv[2]);
		cont = ft_strcspn(argv[1], argv[2]);
		printf("[ft_strcspn] result: %zu\n", cont);
		cont = strcspn(argv[1], argv[2]);
		printf("[   strcspn] result: %zu\n", cont);
	}
	return (0);
}
