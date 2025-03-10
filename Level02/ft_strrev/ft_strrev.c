#include <stdio.h>

char    *ft_strrev(char *str)
{
	char	tmp;
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str[j])
		j++;
	while (str[i])
	{
		tmp = str[i];
		str[i] = str[j - 1];
		str[j - 1] = tmp;
		i++;
		j--;
		if (i >= j)
			break;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Initial  str: %s\n", argv[1]);
		printf("Inversed str: %s\n", ft_strrev(argv[1]));
	}
	return (0);
}
