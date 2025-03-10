#include <stdio.h> // for size_t; printf
#include <string.h> // for strcspn; size_t;

size_t	char_in_reject(const char s, const char *reject)
{
	size_t	i;
	
	if (!s)
		return (0);
	i = 0;
	while (s != reject[i] && reject[i])
		i++;
	if (s == reject[i])
		return (1);
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (char_in_reject(s[i], reject))
			break;
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
