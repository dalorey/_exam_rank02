#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	print;

	i = 0;
	print = 1;
	if (argc == 2)
	{
		while (argv[1][i] != '\0' && argv[1][i] == ' ')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] != ' ' && print)
				write(1, &argv[1][i], 1);
			else
				print = 0;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
