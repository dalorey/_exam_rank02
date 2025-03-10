#include <unistd.h>
#include <stdio.h> // for printf;

int	found_before(char *str, int i)
{
	int	j;

	j = i - 1;
	while (str[j] != str[i] && j >= 0)
		j--;
	if (str[j] == str[i])
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (!found_before(argv[1], i))
						write(1, &argv[1][i], 1);
					break ;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
