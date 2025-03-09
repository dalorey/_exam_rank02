#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	char	new_letter;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				new_letter = argv[1][i] + 32;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				new_letter = argv[1][i] - 32;
			else
				new_letter = argv[1][i];
			write (1, &new_letter, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
