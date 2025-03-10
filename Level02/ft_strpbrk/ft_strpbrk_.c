#include <stdio.h> // for printf;

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

#include <string.h> // for strpbrk;

int	main(int argc, char *argv[])
{
	char	*str_ft;
	char	*str;
	
	if (argc == 3)
	{
		printf("arg1: %s\n", argv[1]);
		printf("arg2: %s\n", argv[2]);
		str_ft = ft_strpbrk(argv[1], argv[2]);
		printf("[ft_strpbrk] substr: '%s'\n", str_ft);
		str = strpbrk(argv[1], argv[2]);
		printf("[   strpbrk] substr: '%s'\n", str);
	}
	return (0);
}
